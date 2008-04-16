
import numpy as np

class s_coordinate(object):
    """docstring for Depths"""
    def __init__(self, hc, h, theta_b, theta_s, N, grid='rho', zeta=None):
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
        
        if len(self.h.shape) == len(zeta.shape):       # Assure a time-dimension exists
            zeta = zeta[np.newaxis, :]
        
        ti = zeta.shape[0]
        z = np.empty((ti, self.N) + self.h.shape, 'd')
        for n in range(ti):
            for  k in range(self.N):
                z0=(self.sc[k]-self.Cs[k])*self.hc + self.Cs[k]*self.h;
                z[n,k,:] = z0 + zeta[n,:]*(1.0 + z0/self.h);
        
        return np.squeeze(z[res_index])
    

# def scoordr(h,hc,theta_b,theta_s,N):
#     """
#     z=scoordr(h,hc,theta_b,theta_s,N)
#     SCOORDR finds z at rho points (positive up, zero at rest surface) 
#      h = array of depths (e.g., from grd file)
#      hc = critical depth
#      theta_b = surface/bottom focusing parameter
#      theta_s = strength of focusing parameter
#      N number of vertical rho-points
#     """
#     warnings.warn('Deprecated -- use Depths class instead.')
#     sc_w = arange(-1, 1./N, 1./N, dtype='d')
#     sc_r = 0.5*(sc_w[1:]+sc_w[:-1])
#     Cs_r = (1-theta_b)*sinh(theta_s*sc_r)/sinh(theta_s)\
#           +0.5*theta_b\
#           *(tanh(theta_s*(sc_r+0.5))-tanh(0.5*theta_s))/tanh(0.5*theta_s)
#     z_r = empty((N,) + h.shape, dtype='d')
#     for  k in arange(N):
#         z_r[k,:]=(sc_r[k]-Cs_r[k])*hc + Cs_r[k]*h
#     return(squeeze(z_r))


# def scoordw(h,hc,theta_b,theta_s,N):
#     """
#     z=scoordr(h,hc,theta_b,theta_s,N)
#     SCOORDW finds z at rho points (positive up, zero at rest surface) 
#      h = array of depths (e.g., from grd file)
#      hc = critical depth
#      theta_b = surface/bottom focusing parameter
#      theta_s = strength of focusing parameter
#      N number of vertical w-points (one more than rho-points)
#     """
#     warnings.warn('Deprecated -- use Depths class instead.')
#     sc_w = arange(-1, 1./N, 1./N, dtype='d')
#     Cs_w = (1-theta_b)*sinh(theta_s*sc_w)/sinh(theta_s)\
#           +0.5*theta_b\
#           *(tanh(theta_s*(sc_w+0.5))-tanh(0.5*theta_s))/tanh(0.5*theta_s)
#     z_w = empty((N,) + h.shape, dtype='d')
#     for  k in arange(N):
#         z_w[k,:]=(sc_w[k]-Cs_w[k])*hc + Cs_w[k]*h
#     return(squeeze(z_w))

