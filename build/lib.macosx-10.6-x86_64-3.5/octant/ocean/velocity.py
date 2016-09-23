#!/usr/bin/env python
# encoding: utf-8
"""
velocity class.py

Created by Rob Hetland on 2007-01-13.
Copyright (c) 2007 Texas A&M Univsersity. All rights reserved.
"""

import pyroms
from numpy import *
from warnings import warn

class nc_velocity (object):
    
    def __init__(self, nc, grid='rho', angle=None):
        self.nc = pyroms.Dataset(nc)
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


if __name__ == '__main__':
    nc = pyroms.Dataset('/Users/rob/Models/roms/inertial/ocean_his.nc')
    vel = velocity(nc)
    u, v = vel[-1, -1, :]
    def rot2d(x, y, ang):
        'rotate vectors by geometric angle'
        xr = x*cos(ang) - y*sin(ang)
        yr = x*sin(ang) + y*cos(ang)
        return xr, yr
    
    
