
import sys

import numpy as np
import ctypes

import octant

class CSA(object):
    '''cubic spline approximation for re-gridding 2D data sets
    
    Parameters
    ==========
    
    xin : array-like
        an array of x data point locations
    yin : array-like
        an array of z data point locations
    zin : array-like
        an array of z data point locations
    sigma : array-like or None
        an array of errors for zin (standard deviation)
        None for no error (default)
    k : integer
        Set the spline sensitivity (default = 140).
        Reduce to get smoother results.
    nppc : integer
        Average number of points per cell (default = 5)
        Decrease to get smaller cells or increase to get larger cells
    npmin : integer
        Minimal number of points locally involved in spline 
        calculation (default = 3)
    npmax : integer
        Maximum number of points locally involved in spline 
        calculation (default = 40)
        
    Returns
    =======
    
    csa_interp : object
        This object can be called with arguments of x and y points to be
        interpolated to.  The input data, zin, can be reset by overwriting
        that object parameter.
    
    Examples
    ========
    
    >>> import csa
    >>> xin = np.random.randn(10000)
    >>> yin = np.random.randn(10000)
    >>> zin = np.sin( xin**2 + yin**2 ) / (xin**2 + yin**2 )
    >>> xout, yout = np.mgrid[-3:3:10j, -3:3:10j]
    >>> csa_interp = csa.CSA(xin, yin, zin)
    >>> zout = csa_interp(xout, yout)
    >>> csa_interp.zin =  np.cos( xin + yin**2 )
    >>> zout = csa_interp
    >>> print zout
    
    '''
    
    # for directory in sys.path:
    #     try:
    _csa = np.ctypeslib.load_library('_csa', octant.__path__[0])
    #         break
    #     except:
    #         pass
    
    
    _csa.csa_approximatepoints2.restype = ctypes.POINTER(ctypes.c_double)
    
    
    def __init__(self, xin, yin, zin, sigma=None, npmin=3, npmax=40, k=140, nppc=5):
        self.xin = np.asarray(xin)
        self.yin = np.asarray(yin)
        
        assert xin.size == yin.size, \
            'xin and yin must have the same number of elements'
        
        self._set_zin(zin)
        
        self.sigma = sigma
        
        self.k = k
        self.nppc = nppc
        self.npmin = npmin
        self.npmax = npmax
        
    def _calculate_points(self, xout, yout):
        
        xout = np.asarray(xout)
        yout = np.asarray(yout)
        
        nin = self.xin.size
        nout = xout.size
        
        if self.sigma is None:
            sigma = ctypes.POINTER(ctypes.c_double)()
        else:
            sigma = (ctypes.c_double * nin)(*(self.sigma * np.ones_like(self.xin)))
        
        zout = None
        
        zout = self._csa.csa_approximatepoints2(
                     ctypes.c_int(nin),                        #int nin
                     (ctypes.c_double * nin)(*self.xin.flat),  #double xin[]
                     (ctypes.c_double * nin)(*self.yin.flat),  #double yin[]
                     (ctypes.c_double * nin)(*self._zin.flat), #double zin[]
                     sigma,                                    #double sigma[] or NULL
                     ctypes.c_int(nout),                       #int nout
                     (ctypes.c_double * nout)(*xout.flat),     #double xout[]
                     (ctypes.c_double * nout)(*yout.flat),     #double yout[]
                     ctypes.c_int(self.npmin),                 #int npmin
                     ctypes.c_int(self.npmax),                 #int npmax
                     ctypes.c_int(self.k),                     #int k
                     ctypes.c_int(self.nppc))                  #int nppc
        
        zout = np.asarray([zout[i] for i in range(nout)])  
        zout.shape = xout.shape
        return np.ma.masked_where(np.isnan(zout), zout)
    
    def __call__(self, xout, yout):
        '''Return interpolated values of zin at locations (xout, yout)'''
        xout = np.asarray(xout)
        yout = np.asarray(yout)
        return self._calculate_points(xout, yout)
    
    def _set_zin(self, zin):
        zin = np.asarray(zin)
        assert zin.size == self.xin.size, \
            'zin must have the same number of elements as xin and yin'
        self._zin = zin
    
    zin = property(lambda self: self._zin, _set_zin, doc='Input values to be approximated')
    


if __name__ == '__main__':
    import matplotlib.pyplot as plt
    
    xin = np.random.randn(10000)
    yin = np.random.randn(10000)
    zin = np.sin( xin**2 + yin**2 ) / (xin**2 + yin**2 )
    sigma = 0.01 * np.ones_like(xin)
    
    print ' ### Set up input data points'
    
    xout, yout = np.mgrid[-3:3:100j, -3:3:100j]
    
    csa_interp = CSA(xin, yin, zin)
    
    def plot_csa(csa_interp, xout, yout):
        
        plt.figure()
        zout = csa_interp(xout, yout)
        plt.pcolormesh(xout, yout, zout, vmin=-1, vmax=1)
        
        plt.scatter(csa_interp.xin, csa_interp.yin, 10, csa_interp.zin, 
                    edgecolors='none', vmin=-1, vmax=1)
        plt.colorbar()
    
    plot_csa(csa_interp, xout, yout)
    
    csa_interp.zin = np.cos( xin + yin**2 )
    
    plot_csa(csa_interp, xout, yout)
    
    plt.show()

