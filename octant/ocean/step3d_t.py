#!/usr/bin/env python
# encoding: utf-8
"""
step3d_t.py

Created by Rob Hetland on 2007-10-24.
Copyright (c) 2007 Texas A&M Univsersity. All rights reserved.
Release under MIT license.
"""

from numpy import *
import pylab as pl
import pyroms
from scipy.interpolate import interp1d

import _step3d_t

class Step3d_t(object):
    """docstring for Step3d_t"""
    def __init__(self, nc, grd=None, AKt_bak=1e-5):
        self.nc = pyroms.Dataset(nc)
        self.dt = nc.variables['dt'][:]
        if grd is None:
            self.grd = pyroms.nc_grid(nc)
        else:
            self.grd = grd
        self.rmask = self.grd.mask
        self.pm = self.grd.pm
        self.pn = self.grd.pn
        self._ocean_time = pyroms.ocean_time(nc)
        self.z_w = pyroms.nc_depths(nc, grid='w')
        self.time = self._ocean_time[0]
        self._lidx = -999
        if 'AKt' not in nc.variables:
            print ' ### Warning -- AKt not found, using AKt_bak = %5.3e' % AKt_bak
            self._AKt_bak = AKt_bak
    
    def step(self, static=False):
        """docstring for fname"""
        
        lidx = argwhere(abs(self._ocean_time <= self.time)).max()
        if lidx != self._lidx:
            self._lidx = lidx
            self._uidx = lidx+2
            if self._uidx >= len(self._ocean_time): self._uidx = None
            
            self._tidx=slice(self._lidx,self._uidx)
            self._tstart = self._ocean_time[self._tidx][0]
            self._tend = self._ocean_time[self._tidx][-1]
            
            self._z_wi = self.z_w[self._tidx]
            self._ui = self.nc.variables['u'][self._tidx]
            self._vi = self.nc.variables['v'][self._tidx]
            try:
                self._AKti = self.nc.variables['AKt'][self._tidx]
            except:
                self._AKti = zeros_like(self._z_wi) + self._AKt_bak
        
        w0 = (self._tend-self.time)/(self._tend-self._tstart)
        w1 = 1.0 - w0
        self.trc = _step3d_t.step3d_t(self.dt, 
                          self.rmask.T, self.pm.T, self.pn.T, 
                          (w0*self._z_wi[0] + w1*self._z_wi[1]).T,
                          (w0*self._AKti[0] + w1*self._AKti[1]).T,
                          (w0*self._ui[0] + w1*self._ui[1]).T,
                          (w0*self._vi[0] + w1*self._vi[1]).T,
                          self.trc.T).T
        
        print 'time=%9.2f, mean=%7.3e, min=%7.3e, max=%7.3e' % \
              (self.time, self.trc.mean(), self.trc.min(), self.trc.max())
        
        if static is False:
            self.time = self.time + self.dt
        
if __name__ == '__main__':
    nc = pyroms.MFDataset('/Volumes/Hetland_merrimack/field_2007/steady/ocean_1750*.nc')
    step = Step3d_t(nc)
    step.dt=5.0
    y, x = mgrid[0:258, 0:514]
    step.trc = sin(x*8*pi/x.max())[newaxis,:,:] * ones((30,), 'd')[:, newaxis, newaxis]
    step.static_step(17, 500)



