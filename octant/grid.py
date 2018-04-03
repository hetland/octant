from __future__ import absolute_import, division, print_function

import numpy as np
import pyproj

class CGrid(object):
    """Curvilinear Arakawa C-Grid

    The basis for the CGrid class are two arrays defining the verticies of the
    grid in Cartesian (for geographic coordinates, see CGrid_geo). An optional
    mask may be defined on the cell centers. Other Arakawa C-grid properties,
    such as the locations of the cell centers (rho-points), cell edges (u and
    v velocity points), cell widths (dx and dy) and other metrics (angle,
    dmde, and dndx) are all calculated internally from the vertex points.

    Input vertex arrays may be either type np.array or np.ma.MaskedArray. If
    masked arrays are used, the mask will be a combination of the specified
    mask (if given) and the masked locations.

    EXAMPLES:
    --------

    >>> x, y = mgrid[0.0:7.0, 0.0:8.0]
    >>> x = np.ma.masked_where( (x<3) & (y<3), x)
    >>> y = np.ma.MaskedArray(y, x.mask)
    >>> grd = octant.grid.CGrid(x, y)
    >>> print(grd.x_rho)
    [[-- -- -- 0.5 0.5 0.5 0.5]
     [-- -- -- 1.5 1.5 1.5 1.5]
     [-- -- -- 2.5 2.5 2.5 2.5]
     [3.5 3.5 3.5 3.5 3.5 3.5 3.5]
     [4.5 4.5 4.5 4.5 4.5 4.5 4.5]
     [5.5 5.5 5.5 5.5 5.5 5.5 5.5]]
    >>> print(grd.mask)
    [[ 0.  0.  0.  1.  1.  1.  1.]
     [ 0.  0.  0.  1.  1.  1.  1.]
     [ 0.  0.  0.  1.  1.  1.  1.]
     [ 1.  1.  1.  1.  1.  1.  1.]
     [ 1.  1.  1.  1.  1.  1.  1.]
     [ 1.  1.  1.  1.  1.  1.  1.]]

    """

    def __init__(self, x, y):

        assert np.ndim(x)==2 and np.ndim(y)==2 and np.shape(x)==np.shape(y), \
            'x and y must be 2D arrays of the same size.'

        if np.any(np.isnan(x)) or np.any(np.isnan(y)):
            x = np.ma.masked_where( (isnan(x)) | (isnan(y)) , x)
            y = np.ma.masked_where( (isnan(x)) | (isnan(y)) , y)

        self.x_vert = x
        self.y_vert = y

        mask_shape = tuple([n-1 for n in self.x_vert.shape])
        self.mask_rho = np.ones(mask_shape, dtype='d')

        # If maskedarray is given for verticies, modify the mask such that
        # non-existant grid points are masked.  A cell requires all four
        # verticies to be defined as a water point.
        if isinstance(self.x_vert, np.ma.MaskedArray):
            mask = (self.x_vert.mask[:-1,:-1] | self.x_vert.mask[1:,:-1] | \
                    self.x_vert.mask[:-1,1:] | self.x_vert.mask[1:,1:])
            self.mask_rho = np.asarray(~(~np.bool_(self.mask_rho) | mask), dtype='d')

        if isinstance(self.y_vert, np.ma.MaskedArray):
            mask = (self.y_vert.mask[:-1,:-1] | self.y_vert.mask[1:,:-1] | \
                    self.y_vert.mask[:-1,1:] | self.y_vert.mask[1:,1:])
            self.mask_rho = np.asarray(~(~np.bool_(self.mask_rho) | mask), dtype='d')

        self._calculate_subgrids()
        self._calculate_metrics()

    def _calculate_subgrids(self):
        'Calculate rho, u, v, and psi grids from vertices grid'
        self.x_rho = 0.25*(self.x_vert[1:,1:]+self.x_vert[1:,:-1]+ \
                           self.x_vert[:-1,1:]+self.x_vert[:-1,:-1])
        self.y_rho = 0.25*(self.y_vert[1:,1:]+self.y_vert[1:,:-1]+ \
                           self.y_vert[:-1,1:]+self.y_vert[:-1,:-1])
        self.x_u = 0.5*(self.x_vert[:-1,1:-1] + self.x_vert[1:,1:-1])
        self.y_u = 0.5*(self.y_vert[:-1,1:-1] + self.y_vert[1:,1:-1])
        self.x_v = 0.5*(self.x_vert[1:-1,:-1] + self.x_vert[1:-1,1:])
        self.y_v = 0.5*(self.y_vert[1:-1,:-1] + self.y_vert[1:-1,1:])
        self.x_psi = self.x_vert[1:-1,1:-1]
        self.y_psi = self.y_vert[1:-1,1:-1]

    def _calculate_metrics(self):
        'Calculate pm, pn, dndx, dmde, and angle from x_vert and y_vert'
        x_temp = 0.5*(self.x_vert[1:,:]+self.x_vert[:-1,:])
        y_temp = 0.5*(self.y_vert[1:,:]+self.y_vert[:-1,:])
        self.dx = np.sqrt(np.diff(x_temp, axis=1)**2 + np.diff(y_temp, axis=1)**2)
        x_temp = 0.5*(self.x_vert[:,1:]+self.x_vert[:,:-1])
        y_temp = 0.5*(self.y_vert[:,1:]+self.y_vert[:,:-1])
        self.dy = np.sqrt(np.diff(x_temp, axis=0)**2 + np.diff(y_temp, axis=0)**2)

        if isinstance(self.dy, np.ma.MaskedArray):
            self.dndx = np.ma.zeros(self.x_rho.shape, dtype='d')
        else:
            self.dndx = np.zeros(self.x_rho.shape, dtype='d')

        if isinstance(self.dx, np.ma.MaskedArray):
            self.dmde = np.ma.zeros(self.x_rho.shape, dtype='d')
        else:
            self.dmde = np.zeros(self.x_rho.shape, dtype='d')

        self.dndx[1:-1,1:-1] = 0.5*(self.dy[1:-1,2:] - self.dy[1:-1,:-2])
        self.dmde[1:-1,1:-1] = 0.5*(self.dx[2:,1:-1] - self.dx[:-2,1:-1])

        if isinstance(self.x_vert, np.ma.MaskedArray) or \
           isinstance(self.y_vert, np.ma.MaskedArray):
            self.angle = np.ma.zeros(self.x_vert.shape, dtype='d')
        else:
            self.angle = np.zeros(self.x_vert.shape, dtype='d')

        # angles are defined using the y-average of the verticies, equivalent
        # to the u-points with extra columns on the edges
                            
        self.angle = np.arctan2( np.diff(0.5*( self.y_vert[1:,:]
                                              +self.y_vert[:-1,:] )),
                                     np.diff(0.5*( self.x_vert[1:,:]
                                                  +self.x_vert[:-1,:] )) )

    def calculate_orthogonality(self):
        '''
        Calculate orthogonality error in radians
        '''
        z = self.x_vert + 1j*self.y_vert
        du = np.diff(z, axis=1); du = (du/abs(du))[:-1,:]
        dv = np.diff(z, axis=0); dv = (dv/abs(dv))[:,:-1]
        ang1 = np.arccos(du.real*dv.real + du.imag*dv.imag)
        du = np.diff(z, axis=1); du = (du/abs(du))[1:,:]
        dv = np.diff(z, axis=0); dv = (dv/abs(dv))[:,:-1]
        ang2 = np.arccos(du.real*dv.real + du.imag*dv.imag)
        du = np.diff(z, axis=1); du = (du/abs(du))[:-1,:]
        dv = np.diff(z, axis=0); dv = (dv/abs(dv))[:,1:]
        ang3 = np.arccos(du.real*dv.real + du.imag*dv.imag)
        du = np.diff(z, axis=1); du = (du/abs(du))[1:,:]
        dv = np.diff(z, axis=0); dv = (dv/abs(dv))[:,1:]
        ang4 = np.arccos(du.real*dv.real + du.imag*dv.imag)
        ang = np.mean([abs(ang1), abs(ang2), abs(ang3), abs(ang4)], axis=0)
        ang = (ang-np.pi/2.0)
        return ang

    def mask_polygon(self, polyverts, mask_value=0.0):
        """
        Mask Cartesian points contained within the polygon defined by polyverts

        A cell is masked if the cell center (x_rho, y_rho) is within the
        polygon. Other sub-masks (mask_u, mask_v, and mask_psi) are updated
        automatically.

        mask_value [=0.0] may be specified to alter the value of the mask set
        within the polygon.  E.g., mask_value=1 for water points.
        """

        polyverts = np.asarray(polyverts)
        assert polyverts.ndim == 2, \
            'polyverts must be a 2D array, or a similar sequence'
        assert polyverts.shape[1] == 2, \
            'polyverts must be two columns of points'
        assert polyverts.shape[0] > 2, \
            'polyverts must contain at least 3 points'

        mask = self.mask_rho
        inside = points_inside_poly(
            np.vstack( (self.x_rho.flat, self.y_rho.flat) ).T,
            polyverts)
        if np.any(inside):
            self.mask_rho.flat[inside] = mask_value

    def _get_mask_u(self):
        return self.mask_rho[:,1:]*self.mask_rho[:,:-1]

    def _get_mask_v(self):
        return self.mask_rho[1:,:]*self.mask_rho[:-1,:]

    def _get_mask_psi(self):
        return self.mask_rho[1:,1:]*self.mask_rho[:-1,1:]* \
               self.mask_rho[1:,:-1]*self.mask_rho[:-1,:-1]

    def _set_mask_rho(self, mask_rho):
        self.mask_rho = mask_rho

    x = property(lambda self: self.x_vert, None, None, 'Return x_vert')
    y = property(lambda self: self.y_vert, None, None, 'Return x_vert')
    mask = property(lambda self: self.mask_rho, _set_mask_rho, None, 'Return mask_rho')
    mask_u   = property(_get_mask_u, None, None, 'Return mask_u')
    mask_v   = property(_get_mask_v, None, None, 'Return mask_v')
    mask_psi = property(_get_mask_psi, None, None, 'Return mask_psi')


class CGrid_geo(CGrid):
    """Curvilinear Arakawa C-grid defined in geographic coordinates

    For a geographic grid, a projection may be specified, or The default
    projection for will be defined by the matplotlib.toolkits.Basemap
    projection:

    proj = Basemap(projection='merc', resolution=None, lat_ts=0.0)

    For a geographic grid, the cell widths are determined by the great
    circle distances. Angles, however, are defined using the projected
    coordinates, so a projection that conserves angles must be used. This
    means typically either Mercator (projection='merc') or Lambert
    Conformal Conic (projection='lcc').


    """
    def _calculate_metrics(self):

        # calculate metrics based on x and y grid
        super(CGrid_geo, self)._calculate_metrics()

        # optionally calculate dx and dy based on great circle distances
        # for more accurate cell sizes.
        if self.use_gcdist:
            geod = pyproj.Geod(ellps=self.ellipse)
            az1, az2, dx = geod.inv(self.lon[:,1:],  self.lat[:,1:], \
                                    self.lon[:,:-1], self.lat[:,:-1])
            self.dx = 0.5*(dx[1:,:]+dx[:-1,:])
            self.pm = 1.0/self.dx
            az1, ax2, dy = geod.inv(self.lon[1:,:],  self.lat[1:,:], \
                                   self.lon[:-1,:], self.lat[:-1,:])
            self.dy = 0.5*(dy[:,1:]+dy[:,:-1])
            self.pn = 1.0/self.dy


    def __init__(self, lon, lat, proj, use_gcdist=True, ellipse='WGS84'):
        x, y = proj(lon, lat)
        self.lon_vert = lon
        self.lat_vert = lat
        self.proj = proj

        self.use_gcdist = use_gcdist
        self.ellipse = ellipse

        super(CGrid_geo, self).__init__(x, y)

        self.lon_rho, self.lat_rho = self.proj(self.x_rho, self.y_rho,
                                               inverse=True)
        self.lon_u, self.lat_u = self.proj(self.x_u, self.y_u, inverse=True)
        self.lon_v, self.lat_v = self.proj(self.x_v, self.y_v, inverse=True)
        self.lon_psi, self.lat_psi = self.proj(self.x_psi, self.y_psi,
                                               inverse=True)

        self.f = 2.0 * 7.29e-5 * np.sin(self.lat_rho * np.pi / 180.0)

    def mask_polygon_geo(lonlat_verts, mask_value=0.0):
        lon, lat = zip(*lonlat_verts)
        x, y = proj(lon, lat, inverse=True)
        self.mask_polygon(zip(x, y), mask_value)

    lon = property(lambda self: self.lon_vert, None, None, 'Shorthand for lon_vert')
    lat = property(lambda self: self.lat_vert, None, None, 'Shorthand for lat_vert')


def rho_to_vert(xr, yr, pm, pn, ang):
    Mp, Lp = xr.shape
    x = np.empty((Mp+1, Lp+1), dtype='d')
    y = np.empty((Mp+1, Lp+1), dtype='d')
    x[1:-1, 1:-1] = 0.25*(xr[1:,1:]+xr[1:,:-1]+xr[:-1,1:]+xr[:-1,:-1])
    y[1:-1, 1:-1] = 0.25*(yr[1:,1:]+yr[1:,:-1]+yr[:-1,1:]+yr[:-1,:-1])

    # east side
    theta = 0.5*(ang[:-1,-1]+ang[1:,-1])
    dx = 0.5*(1.0/pm[:-1,-1]+1.0/pm[1:,-1])
    dy = 0.5*(1.0/pn[:-1,-1]+1.0/pn[1:,-1])
    x[1:-1,-1] = x[1:-1,-2] + dx*np.cos(theta)
    y[1:-1,-1] = y[1:-1,-2] + dx*np.sin(theta)

    # west side
    theta = 0.5*(ang[:-1,0]+ang[1:,0])
    dx = 0.5*(1.0/pm[:-1,0]+1.0/pm[1:,0])
    dy = 0.5*(1.0/pn[:-1,0]+1.0/pn[1:,0])
    x[1:-1,0] = x[1:-1,1] - dx*np.cos(theta)
    y[1:-1,0] = y[1:-1,1] - dx*np.sin(theta)

    # north side
    theta = 0.5*(ang[-1,:-1]+ang[-1,1:])
    dx = 0.5*(1.0/pm[-1,:-1]+1.0/pm[-1,1:])
    dy = 0.5*(1.0/pn[-1,:-1]+1.0/pn[-1,1:])
    x[-1,1:-1] = x[-2,1:-1] - dy*np.sin(theta)
    y[-1,1:-1] = y[-2,1:-1] + dy*np.cos(theta)

    # here we are now going to the south side..
    theta = 0.5*(ang[0,:-1]+ang[0,1:])
    dx = 0.5*(1.0/pm[0,:-1]+1.0/pm[0,1:])
    dy = 0.5*(1.0/pn[0,:-1]+1.0/pn[0,1:])
    x[0,1:-1] = x[1,1:-1] + dy*np.sin(theta)
    y[0,1:-1] = y[1,1:-1] - dy*np.cos(theta)

    #Corners
    x[0,0] = 4.0*xr[0,0]-x[1,0]-x[0,1]-x[1,1]
    x[-1,0] = 4.0*xr[-1,0]-x[-2,0]-x[-1,1]-x[-2,1]
    x[0,-1] = 4.0*xr[0,-1]-x[0,-2]-x[1,-1]-x[1,-2]
    x[-1,-1] = 4.0*xr[-1,-1]-x[-2,-2]-x[-2,-1]-x[-1,-2]

    y[0,0] = 4.0*yr[0,0]-y[1,0]-y[0,1]-y[1,1]
    y[-1,0] = 4.0*yr[-1,0]-y[-2,0]-y[-1,1]-y[-2,1]
    y[0,-1] = 4.0*yr[0,-1]-y[0,-2]-y[1,-1]-y[1,-2]
    y[-1,-1] = 4.0*yr[-1,-1]-y[-2,-2]-y[-2,-1]-y[-1,-2]

    return x, y


def uvp_masks(rmask):
    '''
    return u-, v-, and psi-masks based on input rho-mask

    Parameters
    ----------

    rmask : ndarray
        mask at CGrid rho-points

    Returns
    -------
    (umask, vmask, pmask) : ndarrays
        masks at u-, v-, and psi-points

    '''
    rmask = np.asarray(rmask)
    assert rmask.ndim == 2, 'rmask must be a 2D array'
    assert np.all((rmask==0)|(rmask==1)), \
            'rmask array must contain only ones and zeros.'

    umask = rmask[:, :-1] * rmask[:, 1:]
    vmask = rmask[:-1, :] * rmask[1:, :]
    pmask = rmask[:-1, :-1] * rmask[:-1, 1:] * rmask[1:, :-1] * rmask[1:, 1:]

    return umask, vmask, pmask
