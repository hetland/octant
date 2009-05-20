# encoding: utf-8
'''Various vertical coordinates

Presently, only ocean s-coordinates are supported. Future plans will be to
include all of the vertical coordinate systems defined by the CF conventions.

'''
__docformat__ = "restructuredtext en"

import numpy as np

class s_coordinate(object):
    """return an object that can be indexed to return depths
    
    Parameters
    ----------
    h : array_like
        An array of depths, either one- or two-dimensional.
    hc : float
        The critical depth.  Presently hc < h.min() must be true.
    theta_b : float
        A parameter (0.0 < theta_b < 1.0) that says whether the coordinate
        will be focused at the surface (theta_b -> 1.0) or split evenly
        between surface and bottom (theta_b -> 0).
    theta_s : float
        A parameter (typically 0.0 <= theta_s < 5.0) that defines the amount
        of grid focising. A higher value for theta_s will focus the grid more.
    N : int
        The number of rho/tracer-points in the vertical.
    zeta: array_like, optional
        The free surface, must be the same size as h.
    
    Returns
    -------
    z : object
        z is an scoord object that contains as attributes all of the input
        values. The actual depths may be retreived by indexing z. Note that
        the values of zeta are not calculated until z is indexed, so a netCDF
        variable for zeta may be passed, even if the file is large, as only
        the values that are required will be retrieved from the file.
    
    """
    def __init__(self, h, hc, theta_b, theta_s, N, grid='rho', zeta=None):
        self.hc = hc
        self.h = np.asarray(h)
        self.theta_b = theta_b
        self.theta_s = theta_s
        self.N = int(N)
        self.grid = grid
        
        if self.grid == 'w':
            self.N += 1
        
        if zeta is None:
            self.zeta = np.zeros(h.shape)
        else:
            self.zeta = zeta
        
        hdim = len(h.shape)

    def _get_sc(self):
        if self.grid == 'rho':
            sc = np.linspace(-1.0, 0.0, self.N+1)
            sc = 0.5*(sc[1:]+sc[:-1])
        else:
            sc = np.linspace(-1.0, 0.0, self.N)
        return sc
    
    sc = property(_get_sc)
    
    def _get_Cs(self):
        return (1-self.theta_b)*np.sinh(self.theta_s*self.sc)/np.sinh(self.theta_s) \
                + 0.5*self.theta_b*(np.tanh( self.theta_s*(self.sc+0.5))- \
                                             np.tanh(0.5*self.theta_s ))  \
                                  /np.tanh(0.5*self.theta_s)
    
    Cs = property(_get_Cs)
    
    def __getitem__(self, key):
        if isinstance(key, tuple) and len(self.zeta.shape) > len(self.h.shape):
            zeta = self.zeta[key[0]]
            res_index = (slice(None),) + key[1:]
        elif len(self.zeta.shape) > len(self.h.shape):
            zeta = self.zeta[key]
            res_index = slice(None)
        else:
            zeta = self.zeta
            res_index = key
        
        if self.h.ndim == zeta.ndim:       # Assure a time-dimension exists
            zeta = zeta[np.newaxis, :]
        
        ti = zeta.shape[0]
        z = np.empty((ti, self.N) + self.h.shape, 'd')
        for n in range(ti):
            for  k in range(self.N):
                z0=(self.sc[k]-self.Cs[k])*self.hc + self.Cs[k]*self.h;
                z[n,k,:] = z0 + zeta[n,:]*(1.0 + z0/self.h);
        
        return np.squeeze(z[res_index])
