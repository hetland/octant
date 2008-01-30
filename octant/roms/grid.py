#!/usr/bin/env python
# encoding: utf-8
"""
grid.py

Created by Rob Hetland on 2008-01-18.
Copyright (c) 2008 Texas A&M Univsersity. All rights reserved.
"""
def nc_grid(nc):
    '''
    Return grid class based on ROMS GRD file, or other output file with grid
    information.  The NetCDF file must contain either 'vert' veriables, or the
    verticies will be calculated with 'rho' and angle points.
    '''
    nc = pyroms.Dataset(nc)
    
    varlist = ['h', 'f', 'pm', 'pn', 'angle', 'theta_s', 'theta_b', 'hc']
    variables={}
    for var in varlist:
        try: variables[var] = nc.variables[var][:]
        except: variables[var] = None
    
    try: variables['mask']=nc.variables['mask_rho'][:]
    except: variables['mask']=None
    
    try: variables['N']=len(nc.dimensions['N'])
    except: variables['N']=None
    
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
            raise ValueError, 'NetCDF file must contain x_rho, y_rho, pm, and pn'
        
        ang = variables['angle']
        if ang is None:
            ang = zeros(xr.shape, dtype='d')
        
        x, y = rho_to_vert(xr, yr, pm, pn, ang)
        
        if 'x_psi' in nc.variables.keys() and 'y_psi' in nc.variables.keys():
            xp = nc.variables['x_psi'][:]
            yp = nc.variables['y_psi'][:]
            x[1:-1, 1:-1] = xp
            y[1:-1, 1:-1] = yp
        
        return Grid(x=x, y=y, **variables)


def write_roms_grid(self, filename='ocean_grd.nc', full_output=True, verbose=False):
    
    Mp, Lp = self.x_rho.shape
    M, L = self.x_psi.shape
    
    xl = self.x_rho[self.mask_rho==1.0].ptp()
    el = self.y_rho[self.mask_rho==1.0].ptp()
    
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
        nc.variables[name][:] = extrapolate_mask(var)
        if verbose:
            print ' ... wrote ', name
    
    write_nc_var(self.pm, 'pm', ('eta_rho', 'xi_rho'), 'meters-1')
    write_nc_var(self.pn, 'pn', ('eta_rho', 'xi_rho'), 'meters-1')
    write_nc_var(self.dmde, 'dmde', ('eta_rho', 'xi_rho'))
    write_nc_var(self.dndx, 'dndx', ('eta_rho', 'xi_rho'))
    write_nc_var(self.angle, 'angle', ('eta_rho', 'xi_rho'))
    
    write_nc_var(self.f, 'f', ('eta_rho', 'xi_rho'), 'seconds-1')
    write_nc_var(self.h, 'h', ('eta_rho', 'xi_rho'), 'meters')
    
    write_nc_var(self.mask_rho, 'mask_rho', ('eta_rho', 'xi_rho'))
    write_nc_var(self.mask_u, 'mask_u', ('eta_u', 'xi_u'))
    write_nc_var(self.mask_v, 'mask_v', ('eta_v', 'xi_v'))
    write_nc_var(self.mask_psi, 'mask_psi', ('eta_psi', 'xi_psi'))
    
    if full_output:
        write_nc_var(self.x_vert, 'x_vert', ('eta_vert', 'xi_vert'), 'meters')
        write_nc_var(self.y_vert, 'y_vert', ('eta_vert', 'xi_vert'), 'meters')
        write_nc_var(self.x_rho, 'x_rho', ('eta_rho', 'xi_rho'), 'meters')
        write_nc_var(self.y_rho, 'y_rho', ('eta_rho', 'xi_rho'), 'meters')
        write_nc_var(self.x_u, 'x_u', ('eta_u', 'xi_u'), 'meters')
        write_nc_var(self.y_u, 'y_u', ('eta_u', 'xi_u'), 'meters')
        write_nc_var(self.x_v, 'x_v', ('eta_v', 'xi_v'), 'meters')
        write_nc_var(self.y_v, 'y_v', ('eta_v', 'xi_v'), 'meters')
        write_nc_var(self.x_psi, 'x_psi', ('eta_psi', 'xi_psi'), 'meters')
        write_nc_var(self.y_psi, 'y_psi', ('eta_psi', 'xi_psi'), 'meters')
        if self.geographic:
            write_nc_var(self.lon_vert, 'lon_vert', ('eta_vert', 'xi_vert'), 'meters')
            write_nc_var(self.lat_vert, 'lat_vert', ('eta_vert', 'xi_vert'), 'meters')
            write_nc_var(self.lon_rho, 'lon_rho', ('eta_rho', 'xi_rho'), 'meters')
            write_nc_var(self.lat_rho, 'lat_rho', ('eta_rho', 'xi_rho'), 'meters')
            write_nc_var(self.lon_u, 'lon_u', ('eta_u', 'xi_u'), 'meters')
            write_nc_var(self.lat_u, 'lat_u', ('eta_u', 'xi_u'), 'meters')
            write_nc_var(self.lon_v, 'lon_v', ('eta_v', 'xi_v'), 'meters')
            write_nc_var(self.lat_v, 'lat_v', ('eta_v', 'xi_v'), 'meters')
            write_nc_var(self.lon_psi, 'lon_psi', ('eta_psi', 'xi_psi'), 'meters')
            write_nc_var(self.lat_psi, 'lat_psi', ('eta_psi', 'xi_psi'), 'meters')
    
    nc.close()
    