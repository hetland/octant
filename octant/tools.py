
"""Tools for working with ROMS model input and output."""

import warnings

import numpy as np

from octant.io import Dataset
from octant.extern import delaunay
from octant.external import GreatCircle


import _iso


gc_dist = vectorize(lambda lon1, lat1, lon2, lat2: \
                    GreatCircle(6378137.0, 6356752.3142, \
                                lon1, lat1, lon2, lat2).distance, \
                                doc= \
'''
Usage: dist = roms.gc_dist(lon1, lat1, lon2, lat2)
       All inputs can be arrays, and obey array broadcasting.
''')


def rot2d(x, y, ang):
    'rotate vectors by geometric angle'
    xr = x*np.cos(ang) - y*np.sin(ang)
    yr = x*np.sin(ang) + y*np.cos(ang)
    return xr, yr


def nanmask(a):
    return np.ma.masked_where(isnan(a), a)


# def isoslice(var,prop,isoval=0,axis=0,masking=True):
#     """
#     result = isoslice(variable,property[,isoval=0])
#     
#     result is a a projection of variable at property == isoval in the first
#     nonsingleton dimension.  In the case when there is more than one zero
#     crossing, the results are averaged.
#     
#     EXAMPLE:
#     Assume two three dimensional variable, s (salt), z (depth), and
#     u (velicity), all on the same 3D grid.  x and y are the horizontal 
#     positions, with the same horizontal dimensions as z (the 3D depth 
#     field).  Here, assume the vertical dimension, that will be projected,
#     is the first.  
#     
#     s_at_m5  = isoslice(s,z,-5);        # s at z == -5
#     h_at_s30 = isoslice(z,s,30);       # z at s == 30
#     u_at_s30 = isoslice(u,s,30);       # u at s == 30
#     """
#     if (len(var.squeeze().shape)<=2):
#         raise ValueError, 'variable must have at least two dimensions'
#     if not prop.shape == var.shape:
#         raise ValueError, 'dimension of var and prop must be identical'
#     var = var.swapaxes(0, axis)
#     prop = prop.swapaxes(0, axis)
#     prop=prop-isoval
#     sz = shape(var)
#     var = var.reshape(sz[0],-1)
#     prop = prop.reshape(sz[0],-1)
#     #find zero-crossings (zc == 1)
#     zc =  where( (prop[:-1,:]*prop[1:,:])<0 ,1., 0.)
#     varl = var[:-1,:]*zc
#     varh = var[1:,:]*zc
#     propl = prop[:-1,:]*zc
#     proph = prop[1:,:]*zc
#     result = varl - propl*(varh-varl)/(proph-propl)
#     result = where(zc==1., result, 0.)
#     szc = zc.sum(axis=0)
#     szc = where(szc==0., 1, szc)
#     result = result.sum(axis=0)/szc
#     if masking:
#         result = ma.masked_where(zc.sum(axis=0)==0, result)
#         if all(result.mask):
#             raise Warning, 'property==%f out of range (%f, %f)' % \
#                            (isoval, (prop+isoval).min(), (prop+isoval).max())
#     result = result.reshape(sz[1:])
#     return(result)


def shrink(a,b):
    """
    Return array(s) shrunk to fit a specified shape (or each other).
    
    a = shrink(array, shape)
        array is an numpy ndarray, and shape is a tuple (e.g., from array.shape).
        a is the input array shrunk such that its maximum dimensions are given
        by shape.  If shape has more dimensions than array, the last dimensions
        of shape are fit.
    
    as, bs = shrink(a, b)
        If the second argument is also an array, both a and b are shrunk to the
        dimensions of each other.  The input arrays must have the same number of
        dimensions, and the resulting arrays will have the same shape.
    
    Example:
        >>> shrink(rand(10, 10), (5, 9, 18)).shape
        (9, 10)
        >>> map(shape, shrink(rand(10, 10, 10), rand(5, 9, 18)))        
        [(5, 9, 10), (5, 9, 10)]      
    """
    if isinstance(b, ndarray):
        if not len(a.shape) == len(b.shape):
            raise Exception, 'input arrays must have the same number of dimensions'
        a = shrink(a,b.shape)
        b = shrink(b,a.shape)
        return (a, b)
    if isinstance(b, int):
        b = (b,)
    if len(a.shape) == 1:                   # consider a 1D array as a special case
        dim = b[-1]
        while a.shape[0] > dim:             # only shrink a
            if (dim - a.shape[0]) >= 2:     # trim off edges evenly
                a = a[1:-1]
            else:                           # or average adjacent cells
                a = 0.5*(a[1:] + a[:-1])     
        return a
    for dim_idx in range(-(len(a.shape)),0):
        dim = b[dim_idx]
        a = a.swapaxes(0,dim_idx)           # put working dim first
        while a.shape[0] > dim:             # only shrink a
            if (a.shape[0] - dim) >= 2:     # trim off edges evenly
                a = a[1:-1,:]
            if (a.shape[0] - dim) == 1:      # or average adjacent cells
                a = 0.5*(a[1:,:] + a[:-1,:])
        a = a.swapaxes(0,dim_idx)           # swap working dim back
    return a


def isoslice(z, q, qo=0, mode='spline'):
    """
    result = isoslice(z, q, [,qo=0, mode='spline'])
    
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
    
    z = atleast_3d(z)
    q = atleast_3d(q)
    assert z.shape == q.shape, 'z and q must be the same shape'
    
    qo *= ones(q.shape[1:])
    
    q2d = _iso.zslice(z, q, qo, imode)
    if any(q2d==1e20):
        q2d = ma.masked_where(q2d==1e20, q2d)
    
    return q2d


def iso_integrate(z_w, q, z_iso):
    z_w = atleast_3d(z_w)
    q = atleast_3d(q)
    if isinstance(z_iso, ma.MaskedArray):
        z_iso = z_iso.filled(1e20)
    z_iso *= ones(q.shape[1:])
    return _iso.integrate(z_w, q, z_iso)


def surface(z, q, qo):
    assert len(z.shape) == 3, 'z must be 3D'
    assert len(q.shape) == 3, 'q must be 3D'
    assert z.shape == q.shape, 'z and q must be the same size'
    qo = qo * ones(q.shape[1:])
    z_iso = _iso.surface(z, q, qo)
    if any(z_iso==1e20):
        return ma.masked_where(z_iso==1e20, z_iso)
    else:
        return z_iso


def N2(rho, z, rho_0=1000.0):
    '''return the stratification frequency, given rho and z
    (both at rho points).'''
    r_z = diff(rho, axis=0) / diff(z, axis=0)
    return -(9.8 / rho_0) * r_z


def arg_nearest(x, xo, scale=None):
    """
    idx = arg_nearest(x, xo, scale=None)
    returns a tuple of the indices of the N-dimensional arrays closest to
    the N-dimensional vector, xo.  Scale can be used to normalize arrays
    if that is an issue.  All input arrays must have the same dimension,
    but can use singleton dimensions (e.g., newaxis) as placeholders.
    """
    assert len(x) == len(xo), 'must have %d %d-dimensional arrays' % (len(xo), len(xo))
    for dim, p in enumerate(x):
        assert len(p.shape) == len(xo), 'dimensions of array %d must be %d' % (dim+1, len(xo))
    if scale:
        assert len(x) == len(scale), 'dimensions of array and scale must be identical'
        x = [p*q for (p, q) in zip(x, scale)]
        xo = [p*q for (p, q) in zip(xo, scale)]
    q = reduce(add, [(y-yo)**2 for (y, yo) in zip(x, xo)])
    return where(q == q.min())


def extrapolate_mask(a, mask=None):
    if mask is None and not isinstance(a, ma.MaskedArray): 
        return a
    if mask is None:
        mask = a.mask
    else:
        if isinstance(a, ma.MaskedArray):
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

