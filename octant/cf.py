"""
cf.py - classes around CF compliant files

The cf module is made for reading CF-compliant datasets,
knowing data, its structure, units and conversions
between units afterwards.

Classes:
========
time - getting a datetime array from a CF-compl. netCDF Dataset

Dependencies:
=============
numpy
netcdftime (packaged in netcdf4-python)
"""

import numpy as np
from octant.io import Dataset
import netcdftime

class time (np.ndarray):
    
    _unit2sec={}
    _unit2sec['seconds'] = 1.0
    _unit2sec['minutes'] = 60.0
    _unit2sec['hours'] = 3600.0
    _unit2sec['days'] = 3600.0*24.0
    _unit2sec['weeks'] = 3600.0*24.0*7.0
    _unit2sec['years'] = 3600.0*24.0*365.242198781 #ref to udunits

    _sec2unit={}
    _sec2unit['seconds'] = 1.0
    _sec2unit['minutes'] = 1.0/60.0
    _sec2unit['hours'] = 1.0/3600.0
    _sec2unit['days'] = 1.0/(24.0*3600.0)

    def __new__(self, ncfile, name='time', units=None, calendar='standard'):
        self._nc = Dataset(ncfile)
        data = self._nc.variables[name][:]
        data = data.view(time)
        if units == None:
            units = self._nc.variables[name].units
        data.utime = netcdftime.utime(units, calendar=calendar)
        return data
    
    def __array_finalize__(self, obj):
        self.utime = getattr(obj, 'utime', {})
    
    def nearest_index(self, dateo):
        to = self.utime.date2num(dateo)
        return where(abs(self.jd-to) == min(abs(self.jd-to)))[0]
    
    def nearest(self, dateo):
        """
        find nearest model timestep,
        input and output are datetime objects
        """
        # one might choose the second value for 
        #if len(self.nearest_index(dateo)) == 1:
        #    res=self.jd[self.nearest_index(dateo)][0]
        #else:
        #    res=self.jd[self.nearest_index(dateo)][1]
        return self.utime.num2date(self.jd[self.nearest_index(dateo)][0])
    
    def get_seconds(self):
        fac = self._unit2sec[self.utime.units] * self._sec2unit['seconds']
        return self*fac
    
    def get_minutes(self):
        fac = self._unit2sec[self.utime.units] * self._sec2unit['minutes']
        return self*fac

    def get_hours(self):
        fac = self._unit2sec[self.utime.units] * self._sec2unit['hours']
        return self*fac
    
    def get_days(self):
        fac = self._unit2sec[self.utime.units] * self._sec2unit['days']
        return np.asarray(self,dtype='float64')*fac
    
    def get_jd(self):
        return self.utime.date2num(self.utime.origin)+self.days

    def get_dates(self):
        return self.utime.num2date(self)
        
    jd = property(get_jd, None, doc="Julian day, for plotting in pylab")
    seconds = property(get_seconds, None, doc="seconds")
    minutes = property(get_minutes, None, doc="minutes")
    hours = property(get_hours, None, doc="hours")
    days = property(get_days, None, doc="days")
    dates = property(get_dates, None, doc="datetime objects")


if __name__ == '__main__':
    import netCDF4
    import os
    
    t_test = 432.0*np.arange(10000.0)
    
    nc = netCDF4.Dataset('test1.nc', 'w')
    nc.createDimension('time', 10000)
    nc.createVariable('time', 'f8', ('time',))
    nc.variables['time'].units = 'seconds since 0000-01-01 00:00:00'
    nc.variables['time'][:] = t_test
    nc.close()
    
    t = time('test1.nc')
    assert np.allclose(t.days, t_test/86400.0)
    print t.jd
    print t.dates
    print t.utime.calendar
    
    os.remove('test1.nc')
