# encoding: utf-8
"""Tools for working with ROMS model input and output."""
__docformat__ = "restructuredtext en"

import warnings

import numpy as np

from octant.io import Dataset
from matplotlib import delaunay
from octant.extern import GreatCircle

import _iso


gc_dist = np.vectorize(lambda lon1, lat1, lon2, lat2: \
                      GreatCircle(6378137.0, 6356752.3142, \
                                  lon1, lat1, lon2, lat2).distance, \
                                  doc= \
'''
Usage: dist = roms.gc_dist(lon1, lat1, lon2, lat2)
       All inputs can be arrays, and obey array broadcasting.
''')


def rot2d(x, y, ang):
    '''rotate vectors by geometric angle'''
    xr = x*np.cos(ang) - y*np.sin(ang)
    yr = x*np.sin(ang) + y*np.cos(ang)
    return xr, yr


def nanmask(a):
    '''Return masked array with mask defined by NaNs.'''
    return np.ma.masked_where(isnan(a), a)


def shrink(a,b):
    """Return array shrunk to fit a specified shape by triming or averaging.
    
    a = shrink(array, shape)
    
    array is an numpy ndarray, and shape is a tuple (e.g., from
    array.shape). a is the input array shrunk such that its maximum
    dimensions are given by shape. If shape has more dimensions than
    array, the last dimensions of shape are fit.
    
    as, bs = shrink(a, b)
    
    If the second argument is also an array, both a and b are shrunk to
    the dimensions of each other. The input arrays must have the same
    number of dimensions, and the resulting arrays will have the same
    shape.
    
    Example
    -------
    
    >>> shrink(rand(10, 10), (5, 9, 18)).shape
    (9, 10)
    >>> map(shape, shrink(rand(10, 10, 10), rand(5, 9, 18)))        
    [(5, 9, 10), (5, 9, 10)]   
       
    """
    
    if isinstance(b, np.ndarray):
        if not len(a.shape) == len(b.shape):
            raise Exception, \
                  'input arrays must have the same number of dimensions'
        a = shrink(a,b.shape)
        b = shrink(b,a.shape)
        return (a, b)
    
    if isinstance(b, int):
        b = (b,)
    
    if len(a.shape) == 1:                # 1D array is a special case
        dim = b[-1]                      
        while a.shape[0] > dim:          # only shrink a
            if (dim - a.shape[0]) >= 2:  # trim off edges evenly
                a = a[1:-1]
            else:                        # or average adjacent cells
                a = 0.5*(a[1:] + a[:-1])
    else:
        for dim_idx in range(-(len(a.shape)),0):
            dim = b[dim_idx]
            a = a.swapaxes(0,dim_idx)        # put working dim first
            while a.shape[0] > dim:          # only shrink a
                if (a.shape[0] - dim) >= 2:  # trim off edges evenly
                    a = a[1:-1,:]
                if (a.shape[0] - dim) == 1:  # or average adjacent cells
                    a = 0.5*(a[1:,:] + a[:-1,:])
            a = a.swapaxes(0,dim_idx)        # swap working dim back
    
    return a


def isoslice(z, q, zo=0, mode='spline'):
    """Return a slice a 3D field along an isosurface.
    
    result is a a projection of variable at property == isoval in the first
    nonsingleton dimension.  In the case when there is more than one zero
    crossing, the results are averaged.
    
    EXAMPLE:
    Assume two three dimensional variable, s (salt), z (depth), and
    u (velicity), all on the same 3D grid.  x and y are the horizontal 
    positions, with the same horizontal dimensions as z (the 3D depth 
    field).  Here, assume the vertical dimension, that will be projected,
    is the first.  
    
    s_at_m5  = isoslice(s,z,-5);        # s at z == -5
    h_at_s30 = isoslice(z,s,30);       # z at s == 30
    u_at_s30 = isoslice(u,s,30);       # u at s == 30
    """
    
    if mode=='linear':
        imode=0
    elif mode=='spline':
        imode=1
    else:
        imode=1
        raise Warning, '%s not supported, defaulting to splines' % mode
    
    z = np.atleast_3d(z)
    q = np.atleast_3d(q)
    assert z.shape == q.shape, 'z and q must be the same shape'
    
    qo *= np.ones(q.shape[1:])
    
    q2d = _iso.zslice(z, q, zo, imode)
    if np.any(q2d==1e20):
        q2d = np.ma.masked_where(q2d==1e20, q2d)
    
    return q2d


def iso_integrate(z_w, q, z_iso):
    z_w = np.atleast_3d(z_w)
    q = np.atleast_3d(q)
    if isinstance(z_iso, np.ma.MaskedArray):
        z_iso = z_iso.filled(1e20)
    z_iso *= np.ones(q.shape[1:])
    return _iso.integrate(z_w, q, z_iso)


def surface(z, q, qo):
    assert len(z.shape) == 3, 'z must be 3D'
    assert len(q.shape) == 3, 'q must be 3D'
    assert z.shape == q.shape, 'z and q must be the same size'
    qo = qo * np.ones(q.shape[1:])
    z_iso = _iso.surface(z, q, qo)
    if np.any(z_iso==1e20):
        return np.ma.masked_where(z_iso==1e20, z_iso)
    else:
        return z_iso


def N2(rho, z, rho_0=1000.0):
    '''Return the stratification frequency
    
    Parameters
    ----------
    rho : array_like
        density [kg/m^3]
    z : array_like
        depths [m] (positive upward)
    
    Returns
    -------
    N2 : array_like
        Stratification frequency [1/s], where the vertical dimension (the
        first dimension) is one less than the input arrays.
    
    '''
    rho = np.asarray(rho)
    z = np.asarray(z)
    assert rho.shape == z.shape, 'rho and z must have the same shape.'
    r_z = np.diff(rho, axis=0) / np.diff(z, axis=0)
    return -(9.8 / rho_0) * r_z


def arg_nearest(x, xo, scale=None):
    """returns indices of closest point in an N arrays.
    
    Parameters
    ----------
    x : tuple of N ndarray objects
        N ndarrays of coordinate variables that define an N-dimensional space.
        All arrays must have the same shape.
    xo : array_like
        len(N) array representing the query point.
    scale : array_like, optional
        len(N) array of values to multiply by each coordinate variable by
        before distance is calculated.
    
    Returns
    -------
    indexes : ndarray
        An array of indicies such that (x[idx], y[idx], z[idx], ...) is the
        closest point to xo
    
    """
    
    assert len(x) == len(xo), \
        'must have %d %d-dimensional arrays' % (len(xo), len(xo))
    
    for dim, p in enumerate(x):
        assert len(p.shape) == len(xo), \
            'dimensions of array %d must be %d' % (dim+1, len(xo))
    
    if scale:
        assert len(x) == len(scale), \
            'dimensions of array and scale must be identical'
        x = [p*q for (p, q) in zip(x, scale)]
        xo = [p*q for (p, q) in zip(xo, scale)]
    
    q = reduce(np.add, [(y-yo)**2 for (y, yo) in zip(x, xo)])
    return np.where(q == q.min())


def extrapolate_mask(a, mask=None):
    if mask is None and not isinstance(a, np.ma.MaskedArray): 
        return a
    if mask is None:
        mask = a.mask
    else:
        if isinstance(a, np.ma.MaskedArray):
            mask = mask | a.mask
    a = a[:]    # make a copy of array a
    jj, ii = indices(a.shape)
    igood = ii[~mask]
    jgood = jj[~mask]
    ibad = ii[mask]
    jbad = jj[mask]
    tri = delaunay.Triangulation(igood, jgood)
    # interpolate from the good points (mask == 1)
    interp = tri.nn_extrapolator(a[~mask])
    # to the bad points (mask == 0)
    a[mask] = interp(ibad, jbad)
    return a


class Transect_extrapolator(object):
    """
    General Transect object
    """
    def __init__(self, xg, yg, verts):
        self.xg = np.asarray(xg)
        self.yg = np.asarray(yg)
        self.verts = verts
        self._xv, self._yv = zip(*verts)
        
        self._tri = delaunay.Triangulation(self.xg.flat, self.yg.flat)
    
    def extrapolate(self, prop):
        """
        extrapolate transect values in the prop datafield
        """
        return self._tri.nn_interpolator(prop)(self._xv, self._yv)

