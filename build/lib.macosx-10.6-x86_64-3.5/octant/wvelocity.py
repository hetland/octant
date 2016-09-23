# encoding: utf-8
"""Tools for calculating vertical velocity in s-coordinate models."""
__docformat__ = "restructuredtext en"


# TO DO:
#  - Need to improve API a bit.  Seems inputs are still a bit clunky.
#  - Probably needs an nc_omegaHz, and nc_wvelocity.

import numpy as np

def omegaHz_velocity(u, v, pm, pn, Hz, Hz_t=0):
    '''
    Calculate omega*Hz, the grid-relative vertical velocity, on the s-coordinate.
    
    By definition, omega(sigma=-1) = omega(sigma=0) = 0.
    Solutions are based on continuity in a sigma coordinate:
    
    Hz_t + (Hz*u)_x + (Hz*v)_y + (Hz*omega)_sigma = 0
    
    Parameters
    ----------
    u, v : 3D or 4D array
        The horizontal velocity values, on their respective CGrid points
    pm, pn : 2D array
        The grid metrics, inverse grid widths
    Hz : 3D or 4D array
        The vertical layer thickness at rho-points
    Hz_t : 3D or 4D array
        The rate of change of the the vertical coordinate.  [Default = 0]
    
    Returns
    -------
    omegaHz : 3D array
        The grid-relative vertical velocity on w-points multiplied by Hz,
        i.e., Hz*omega in the equation above.
    
    '''
    
    uflux = u[..., 1:-1, :] * 0.5 * (Hz[..., 1:-1, :-1] + Hz[..., 1:-1, 1:])
    vflux = v[..., :, 1:-1]  * 0.5 * (Hz[..., :-1, 1:-1] + Hz[..., 1:, 1:-1])
    omegaHz_sigma = -Hz_t - np.diff(uflux, axis=-1)*pm[1:-1, 1:-1] - np.diff(vflux, axis=-2)*pn[1:-1, 1:-1] 
    
    return np.cumsum(omegaHz_sigma, axis=-3)

def w_velocity(u, v, omegaHz, pm, pn, zr, z_t =0):
    '''
    Calculate the actual vertical velocity, w.
    
    Based on the equation:
    
        w = Dz/Dt = z_t + u*z_x + v*z_y + omega*Hz
    
    where Hz == z_omega.  
    
    Parameters
    ----------
    u, v : 3D or 4D arrays
        The horizontal velocity values, on their respective CGrid points
    omegaHz : 3D or 4D array
        The s-coordinate transformed vertical velocity, scaled by Hz
    pm, pn : 2D arrays
        The grid metrics, inverse grid widths
    z : 3D or 4D array
        The vertical layer thickness at rho-points
    z_t : 3D or 4D array
        The rate of change of the the vertical coordinate.  [Default = 0]
    
    Returns
    -------
    w : 3D or 4D array
        The absolute vertical velocity on w-points.
    
    '''
    
    pm_u = 0.5 * (pm[:, :-1] + pm[:, 1:])
    pn_v = 0.5 * (pn[:-1, :] + pn[1:, :])
    
    divz_x = np.diff(u * pm_u * np.diff(zr, axis=-1), axis=-1)[..., 1:-1, :]
    divz_y = np.diff(v * pn_v * np.diff(zr, axis=-2), axis=-2)[..., :, 1:-1]
    
    return z_t + divz_x + divz_y + omegaHz




if __name__ == '__main__':

    import octant
    
    k = 1 / 3000.0
    H = 100.0
    Umax = 0.5
    
    Hz = octant.depths.get_Hz(2, 4, 30, 5.0, 1.0, H*np.ones((40, 50)), 10.0)
    zr = octant.depths.get_zrho(2, 4, 30, 5.0, 1.0, H*np.ones((40, 50)), 10.0)

    x = 500.0 * np.arange(50)
    y = 500.0 * np.arange(40)

    x, y = np.meshgrid(x, y)

    xu = 0.5 * (x[:, 1:] + x[:, :-1])
    u = Umax * np.ones((30, 40, 49)) * np.sin(k * xu)
    v = np.zeros((30, 39, 50))

    pm = 0.002 * np.ones((40, 50))
    pn = 0.002 * np.ones((40, 50))
    
    
    omegaHz = omegaHz_velocity(u, v, pm, pn, Hz)
    
    w = w_velocity(u, v, omegaHz, pm, pn, zr)
    
    w_ana = - (k * Umax * H) * np.cos(x[1, 1:-1]/3000.0)
    
    assert np.allclose(w[-1, 1, :], w_ana, rtol=0.01), 'predicted velocity does not match analytical solution'