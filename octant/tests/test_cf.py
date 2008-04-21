#!/usr/bin/env python
# encoding: utf-8
"""
test_cf.py

Created by Rob Hetland on 2008-04-20.
Copyright (c) 2008 Texas A&M Univsersity. All rights reserved.
"""


import unittest
import os
from datetime import datetime, timedelta

import numpy as np
import netCDF4
import matplotlib.pyplot as plt
import pylab

import octant.cf


class untitledTests(unittest.TestCase):
    def setUp(self):
        self.t_test = 432.0*np.arange(10000.0)
        self.dates_1970_test = \
            np.asarray([datetime(1970,1,1)+timedelta(seconds=t) 
                        for t in self.t_test])
        
        nc = netCDF4.Dataset('test_0.nc', 'w')
        nc.createDimension('time', 10000)
        nc.createVariable('time', 'f8', ('time',))
        nc.variables['time'].units = 'seconds since 0000-01-01 00:00:00'
        nc.variables['time'][:] = self.t_test
        nc.close()
        
        nc = netCDF4.Dataset('test_1970.nc', 'w')
        nc.createDimension('time', 10000)
        nc.createVariable('time', 'f8', ('time',))
        nc.variables['time'].units = 'seconds since 1970-01-01 00:00:00'
        nc.variables['time'][:] = self.t_test
        nc.close()
    
    def tearDown(self):
        """docstring for tearDown"""
        os.remove('test_0.nc')
        os.remove('test_1970.nc')
        pass
    
    def test_0_days(self):
        t = octant.cf.time('test_0.nc')
        self.assert_(np.allclose(t.days, self.t_test/86400.0))
    
    def test_0_seconds(self):
        t = octant.cf.time('test_0.nc')
        self.assert_(np.allclose(t.seconds, self.t_test))
    
    def test_1970_days(self):
        t = octant.cf.time('test_1970.nc')
        self.assert_(np.allclose(t.days, self.t_test/86400.0))
    
    def test_1970_seconds(self):
        t = octant.cf.time('test_1970.nc')
        self.assert_(np.allclose(t.seconds, self.t_test))
    
    def test_1970_jd(self):
        """docstring for test_1970_jd"""
        t = octant.cf.time('test_1970.nc')
        self.assert_(np.allclose(pylab.date2num(t.dates),\
                                 pylab.date2num(self.dates_1970_test)))


if __name__ == '__main__':
    unittest.main()