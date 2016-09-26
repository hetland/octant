# encoding: utf-8
"Tools specific for the Regional Ocean Modeling System"
__docformat__ = "restructuredtext en"

from datetime import datetime

import numpy as np
import netCDF4

import octant.depths as depths
from octant.grid import CGrid, rho_to_vert


def nc_gls_dissipation(nc, tidx):
    '''Return the dissipation, based on tke, gls and the gls scheme parameters
       cmu0, m, n, and p.  Usage:

       eps = nc_gls_dissipation(nc, tidx)

       where nc is a netcdf object or filename, tidx is the time index to return
    '''
    cmu0 = nc.variables['gls_cmu0'][:]
    gls_m = nc.variables['gls_m'][:]
    gls_n = nc.variables['gls_n'][:]
    gls_p = nc.variables['gls_p'][:]

    tke = nc.variables['tke'][tidx]
    gls = nc.variables['gls'][tidx]

    return cmu0**(3.0+gls_p/gls_n) * tke**(3.0/2.0+gls_m/gls_n) * gls**(-1.0/gls_n)


class nc_N2(object):
    '''Return N2 (buoyancy frequency squared).  Usage:

       N2 = nc_N2(nc, tidx)

       where nc is a netcdf object or filename, tidx is the time index to return
    '''
    def __init__(self, nc):
        if 'rho' in nc.variables.keys():
            self.rho = nc.variables['rho']
        else:
            raise ValueError("Variable 'rho' not in netcdf file.")
        self.zr = nc_depths(nc, grid='rho')

    def __getitem__(self, elem):
        return N2(self.rho[elem], self.zr[elem])

def nc_curl(nc, tidx, grd=None):
    if grd is None:
        grd = nc_grid(nc)
    u = nc.variables['u'][tidx]
    v = nc.variables['v'][tidx]
    return ( diff(v, axis=-1)/diff(grd.x_v, axis=-1) - \
             diff(u, axis=-2)/diff(grd.y_u, axis=-2) )


def nc_div(nc, tidx, grd=None):
    if grd is None:
        grd = nc_grid(nc)
    u = nc.variables['u'][tidx]
    v = nc.variables['v'][tidx]
    return ( (diff(u, axis=-1)/diff(grd.x_u, axis=-1))[...,1:-1,:] + \
             (diff(v, axis=-2)/diff(grd.y_v, axis=-2))[...,:,1:-1] )


def nc_pstrain(nc, tidx, grd=None):
    if grd is None:
        grd = nc_grid(nc)
    u = nc.variables['u'][tidx]
    v = nc.variables['v'][tidx]
    ex = (diff(u, axis=-1)/diff(grd.x_u, axis=-1))[...,1:-1,:]
    ey = (diff(v, axis=-2)/diff(grd.y_v, axis=-2))[...,:,1:-1]
    gamma = shrink ( diff(u, axis=-2)/diff(grd.y_u, axis=-2) + \
                     diff(v, axis=-1)/diff(grd.x_v, axis=-1)  , ex.shape)
    return 0.5*(ex + ey) + sqrt( (0.5*(ex - ey))**2 + (0.5*gamma)**2 ), \
           0.5*(ex + ey) - sqrt( (0.5*(ex - ey))**2 + (0.5*gamma)**2 )


def nc_grid(nc):
    '''
    Return grid class based on ROMS GRD file, or other output file with grid
    information.  The NetCDF file must contain either 'vert' veriables, or the
    verticies will be calculated with 'rho' and angle points.
    '''
    varlist = ['h', 'f', 'pm', 'pn', 'angle', 'theta_s', 'theta_b', 'hc']
    variables={}
    for var in varlist:
        try:
            variables[var] = nc.variables[var][:]
        except:
            variables[var] = None

    try:
        variables['mask']=nc.variables['mask_rho'][:]
    except:
        variables['mask']=None

    if 'x_vert' in nc.variables.keys() and 'y_vert' in nc.variables.keys():
        x = nc.variables['x_vert'][:]
        y = nc.variables['y_vert'][:]

        if any(isnan(x)): x = ma.masked_where(isnan(x), x)
        if any(isnan(y)): y = ma.masked_where(isnan(y), y)

        try: lon=nc.variables['lon_vert'][:]
        except: lon=None

        try: lat=nc.variables['lat_vert'][:]
        except: lat=None

        return Grid(x=x, y=y, lon=lon, lat=lat, **variables)

    elif 'lon_vert' in nc.variables.keys() and 'lat_vert' in nc.variables.keys():
        lon=nc.variables['lon_vert'][:]
        lat=nc.variables['lat_vert'][:]
        return Grid(lon=lon, lat=lat, **variables)

    else:
        try:
            xr = nc.variables['x_rho'][:]
            yr = nc.variables['y_rho'][:]
            pm = nc.variables['pm'][:]
            pn = nc.variables['pn'][:]
        except:
            raise ValueError('NetCDF file must contain x_rho, y_rho, pm, and pn')

        ang = variables['angle']
        if ang is None:
            ang = np.zeros(xr.shape, dtype='d')

        x, y = rho_to_vert(xr, yr, pm, pn, ang)

        if 'x_psi' in nc.variables.keys() and 'y_psi' in nc.variables.keys():
            xp = nc.variables['x_psi'][:]
            yp = nc.variables['y_psi'][:]
            x[1:-1, 1:-1] = xp
            y[1:-1, 1:-1] = yp

        return CGrid(x=x, y=y, **variables)


def write_grd(grd, filename='ocean_grd.nc', full_output=True, verbose=False):

    Mp, Lp = grd.x_rho.shape
    M, L = grd.x_psi.shape

    xl = grd.x_rho[grd.mask_rho==1.0].ptp()
    el = grd.y_rho[grd.mask_rho==1.0].ptp()

    # Write ROMS grid to file
    nc = netCDF4.Dataset(filename, 'w', format='NETCDF3_CLASSIC')
    nc.Description = 'ROMS grid'
    nc.Author = 'pyroms.gridgen'
    nc.Created = datetime.now().isoformat()
    nc.type = 'ROMS GRD file'

    nc.createDimension('xi_rho', Lp)
    nc.createDimension('xi_u', L)
    nc.createDimension('xi_v', Lp)
    nc.createDimension('xi_psi', L)

    nc.createDimension('eta_rho', Mp)
    nc.createDimension('eta_u', Mp)
    nc.createDimension('eta_v', M)
    nc.createDimension('eta_psi', M)

    nc.createDimension('xi_vert', Lp+1)
    nc.createDimension('eta_vert', Mp+1)

    nc.createVariable('xl', 'f8', ())
    nc.variables['xl'].units = 'meters'
    nc.variables['xl'] = xl

    nc.createVariable('el', 'f8', ())
    nc.variables['el'].units = 'meters'
    nc.variables['el'] = el

    nc.createVariable('spherical', 'S1', ())
    nc.variables['spherical'] = 'F'

    def write_nc_var(var, name, dimensions, units=None):
        nc.createVariable(name, 'f8', dimensions)
        if units is not None:
            nc.variables[name].units = units
        nc.variables[name][:] = var
        if verbose:
            print(' ... wrote ', name)

    write_nc_var(1.0/grd.dx, 'pm', ('eta_rho', 'xi_rho'), 'meters-1')
    write_nc_var(1.0/grd.dy, 'pn', ('eta_rho', 'xi_rho'), 'meters-1')
    write_nc_var(grd.dmde, 'dmde', ('eta_rho', 'xi_rho'))
    write_nc_var(grd.dndx, 'dndx', ('eta_rho', 'xi_rho'))
    write_nc_var(grd.angle_rho, 'angle', ('eta_rho', 'xi_rho'))

    write_nc_var(grd.f, 'f', ('eta_rho', 'xi_rho'), 'seconds-1')
    write_nc_var(grd.h, 'h', ('eta_rho', 'xi_rho'), 'meters')

    write_nc_var(grd.mask_rho, 'mask_rho', ('eta_rho', 'xi_rho'))
    write_nc_var(grd.mask_u, 'mask_u', ('eta_u', 'xi_u'))
    write_nc_var(grd.mask_v, 'mask_v', ('eta_v', 'xi_v'))
    write_nc_var(grd.mask_psi, 'mask_psi', ('eta_psi', 'xi_psi'))

    if full_output:
        write_nc_var(grd.x_vert, 'x_vert', ('eta_vert', 'xi_vert'), 'meters')
        write_nc_var(grd.y_vert, 'y_vert', ('eta_vert', 'xi_vert'), 'meters')
        write_nc_var(grd.x_rho, 'x_rho', ('eta_rho', 'xi_rho'), 'meters')
        write_nc_var(grd.y_rho, 'y_rho', ('eta_rho', 'xi_rho'), 'meters')
        write_nc_var(grd.x_u, 'x_u', ('eta_u', 'xi_u'), 'meters')
        write_nc_var(grd.y_u, 'y_u', ('eta_u', 'xi_u'), 'meters')
        write_nc_var(grd.x_v, 'x_v', ('eta_v', 'xi_v'), 'meters')
        write_nc_var(grd.y_v, 'y_v', ('eta_v', 'xi_v'), 'meters')
        write_nc_var(grd.x_psi, 'x_psi', ('eta_psi', 'xi_psi'), 'meters')
        write_nc_var(grd.y_psi, 'y_psi', ('eta_psi', 'xi_psi'), 'meters')
        try:
            write_nc_var(grd.lon_vert, 'lon_vert', ('eta_vert', 'xi_vert'), 'meters')
            write_nc_var(grd.lat_vert, 'lat_vert', ('eta_vert', 'xi_vert'), 'meters')
            write_nc_var(grd.lon_rho, 'lon_rho', ('eta_rho', 'xi_rho'), 'meters')
            write_nc_var(grd.lat_rho, 'lat_rho', ('eta_rho', 'xi_rho'), 'meters')
            write_nc_var(grd.lon_u, 'lon_u', ('eta_u', 'xi_u'), 'meters')
            write_nc_var(grd.lat_u, 'lat_u', ('eta_u', 'xi_u'), 'meters')
            write_nc_var(grd.lon_v, 'lon_v', ('eta_v', 'xi_v'), 'meters')
            write_nc_var(grd.lat_v, 'lat_v', ('eta_v', 'xi_v'), 'meters')
            write_nc_var(grd.lon_psi, 'lon_psi', ('eta_psi', 'xi_psi'), 'meters')
            write_nc_var(grd.lat_psi, 'lat_psi', ('eta_psi', 'xi_psi'), 'meters')
        except:
            if verbose:
                print('... NO GEOGRAPHIC GRID INFORMATION FOUND.')

    nc.close()

class nc_depths(object):
    """return an object that can be indexed like an ndarray to return depths

    Parameters
    ----------
    nc : netCDF4-like object
        A reference to the netCDF file to read.
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
    grid : 'rho' or 'w'
        Select the type of vertical grid to return.
    zeta: array_like, optional
        The free surface, must be the same size as h in all but the leftmost dimension
        if zeta is a function of time.

    Returns
    -------
    z : object
        z is an scoord object that contains as attributes all of the input
        values. The actual depths may be retreived by indexing z. Note that
        the values of zeta are not calculated until z is indexed, so a netCDF
        variable for zeta may be passed, even if the file is large, as only
        the values that are required will be retrieved from the file.

    """
    def __init__(self, nc, grid, ncg=None):

        # Open the netCDF file
        self.nc = nc
        if ncg is None:
            self.ncg = self.nc

        # Get the vertical dimension of the grid.
        if 'N' in self.nc.dimensions.keys():
            self.N = len(self.nc.dimensions['N'])
        else:
            self.N = len(self.nc.dimensions['s_rho'])

        # Get the scoordinate associated with the specified grid-type
        self.grid = grid
        if self.grid == 'rho':
            self.s = depths.get_srho(self.N)
        elif self.grid == 'w':
            self.N += 1
            self.s = depths.get_sw(self.N)
        else:
            raise Exception('grid type ', grid, 'not defined.')

        # Load in the depth and critical depth info
        self.h = self.ncg.variables['h'][:]
        self.hc = self.nc.variables['hc'][:]

        # Load in the stretching parameters
        self.theta_b = self.nc.variables['theta_b'][:]
        self.theta_s = self.nc.variables['theta_s'][:]

        if 'Vtransform' in self.nc.variables.keys():
            # Define Vtransform using the values specified in the history file
            self.Vtransform = self.nc.variables['Vtransform'][:]
            self.Vstretching = self.nc.variables['Vstretching'][:]
        else:
            # Otherwise, use the defaults based on old-ROMS
            self.Vtransform = 1
            self.Vstretching = 1

        # Load in the _reference_ to the zeta variable
        # (i.e., don't load any actual data yet -- save this for the call to __getitem__)
        self.zeta = self.nc.variables['zeta']

        # Load in the function for C(s)
        self.C = depths.get_Vstretching(self.Vstretching, self.theta_s, self.theta_b, Hscale=3)

        # Load in the function for depths(s, zeta)
        self.depths = depths.get_depths(self.Vtransform, self.C, self.h, self.hc)

    def __getitem__(self, indices):
        if not isinstance(indices, tuple):
            indices = (indices, )

        while len(indices) < 4:
            indices += (slice(None),)

        if isinstance(indices[0], int):
            zeta = self.zeta[indices[0], ...]
            depths = self.depths(self.s, zeta)[indices[1], indices[2], indices[3]]

        else:
            zeta = self.zeta[indices[0]][:, np.newaxis, ...]
            depths = self.depths(self.s, zeta)[:, indices[1], indices[2], indices[3]]

        return depths


class nc_velocity (object):

    def __init__(self, nc, grid='rho', angle=None):
        self.grid = grid
        self.u = self.nc.variables['u']
        self.v = self.nc.variables['v']
        if angle is None:
            try:
                self.ang = self.nc.variables['angle'][:,:]
            except:
                warn("'angle' not found in netcdf object.")
                self.ang = None
        else:
            self.ang = angle

    def __getitem__(self, elem):
        if isinstance(elem, int) or isinstance(elem, float):
            u = self.u[elem]
            v = self.v[elem]
            returnindex = False
        else:
            u = self.u[:]
            v = self.v[:]
            returnindex = True

        if self.grid == 'rho':
            shp = list(u.shape)
            shp[-1] -= 1
            shp[-2] -= 2
            shpr = list(u.shape)
            shpr[-1] += 1
            ur = zeros(shpr)
            vr = zeros(shpr)
            ur[...,1:-1,1:-1] = pyroms.shrink(u, shp)
            vr[...,1:-1,1:-1] = pyroms.shrink(v, shp)
            u = ur
            v = vr
        else:
            u, v = pyroms.shrink(u, v)

        if isinstance(self.ang, ndarray):
            ang = pyroms.shrink(self.ang, u.shape)
        else:
            ang = self.ang

        if self.ang is not None:
            u, v = pyroms.rot2d(u, v, ang)

        if returnindex:
            return u[elem], v[elem]
        else:
            return u, v
