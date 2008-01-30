#!/usr/bin/env python
# encoding: utf-8
"""
depths.py

Created by Rob Hetland on 2007-03-30.
Copyright (c) 2007 Texas A&M Univsersity. All rights reserved.
Release under MIT license.
"""

from numpy import *
from pyroms import Dataset

class Depths(object):
    """docstring for Depths"""
    def __init__(self, hc, h, theta_b, theta_s, N, grid='rho', zeta=None):
        self.hc = hc
        self.h = h
        self.theta_b = theta_b
        self.theta_s = theta_s
        self.N = int(N)
        self.grid = grid
        
        if self.grid == 'w':
            self.N += 1
        
        if zeta is None:
            self.zeta = zeros(h.shape)
        else:
            self.zeta = zeta
        
        hdim = len(shape(h))

    def _get_sc(self):
        if self.grid == 'rho':
            sc = linspace(-1.0, 0.0, self.N+1)
            sc = 0.5*(sc[1:]+sc[:-1])
        else:
            sc = linspace(-1.0, 0.0, self.N)
        return sc
    
    sc = property(_get_sc)
    
    def _get_Cs(self):
        return (1-self.theta_b)*sinh(self.theta_s*self.sc)/sinh(self.theta_s) \
                + 0.5*self.theta_b*(tanh(self.theta_s*(self.sc+0.5))-tanh(0.5*self.theta_s))\
                  /tanh(0.5*self.theta_s)
    
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
            zeta = zeta[newaxis, :]
        
        ti = zeta.shape[0]
        z = empty((ti, self.N) + self.h.shape, 'd')
        for n in range(ti):
            for  k in range(self.N):
                z0=(self.sc[k]-self.Cs[k])*self.hc + self.Cs[k]*self.h;
                z[n,k,:] = z0 + zeta[n,:]*(1.0 + z0/self.h);
        
        return squeeze(z[res_index])
    

if __name__ == '__main__':
    nc = Dataset('/Users/rob/foo/roms-2.2/ocean_his.nc')
    z_r = nc_depths(nc)
    print z_r.sc
    print z_r.N
    print 'z_r.shape = ', z_r[-2:, 1:, 5:, 50:].shape
    z_w = nc_depths(nc, 'w')
    print z_w.Cs
    print z_w.N
    print 'z_w.shape = ', z_w[-2:, 1:, 5:, 50:].shape
