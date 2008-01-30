#!/usr/bin/env python
# encoding: utf-8
"""
untitled.py

Created by Rob Hetland on 2008-01-16.
Copyright (c) 2008 Texas A&M Univsersity. All rights reserved.
"""

def nc_depths(nc, grid='rho', h=None):
    nc = Dataset(nc)
    hc = nc.variables['hc'][:]
    if h is None:
        h = nc.variables['h'][:]
    theta_b = nc.variables['theta_b'][:]
    theta_s = nc.variables['theta_s'][:]
    try:
        N = len(nc.dimensions['N'])
    except:
        N = len(nc.dimensions['s_rho'])
    zeta = nc.variables['zeta']
    return Depths(hc, h, theta_b, theta_s, N, grid=grid, zeta=zeta)


