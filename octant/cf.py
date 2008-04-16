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
    
    _unit2sec={'seconds' : 1.0,
               'minutes' : 60.0,
               'hours'   : 3600.0,
               'days'    : 3600.0*24.0,
               'weeks'   : 3600.0*24.0*7.0,
               'years'   : 3600.0*24.0*365.242198781} #ref to udunits

    _sec2unit={'seconds' : 1.0,
               'minutes' : 1.0/60.0,
               'hours'   : 1.0/3600.0,
               'days'    : 1.0/(24.0*3600.0)}

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
    
    def arg_nearest_date(self, dateo):
        to = self.utime.date2num(dateo)
        return np.min(np.where(np.abs(self-to) == np.min(np.abs(self-to)))[0])
    
    def nearest_date(self, dateo):
        """
        find nearest model timestep,
        input and output are datetime objects
        """
        idx = np.where(np.abs(self.dates-dateo) == np.min(np.abs(self.dates-dateo)))[0]
        idx = np.min(idx)
        return self.dates[idx]
    
    def arg_nearest(self, to, units=None):
        if units is not None:
            to *= self._unit2sec[units] * self._sec2unit[self.utime.units]
        return np.min(np.where(np.abs(self-to) == np.min(np.abs(self-to)))[0])
    
    def nearest(self, to, units=None):
        """
        find nearest model timestep,
        input and output are datetime objects
        """
        if units is not None:
            to *= self._unit2sec[units] * self._sec2unit[self.utime.units]
        idx = np.where(np.abs(self-to) == np.min(np.abs(self-to)))[0]
        idx = np.min(idx)
        return self[idx]
    
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
        fac = self._unit2sec[self.utime.units] * self._sec2unit['days']
        return self.utime.date2num(self.utime.origin)*fac+self.days

    def get_dates(self):
        return self.utime.num2date(self)
        
    jd = property(get_jd, None, doc="Julian day, for plotting in pylab")
    seconds = property(get_seconds, None, doc="seconds")
    minutes = property(get_minutes, None, doc="minutes")
    hours = property(get_hours, None, doc="hours")
    days = property(get_days, None, doc="days")
    dates = property(get_dates, None, doc="datetime objects")


if __name__ == '__main__':

    def time_test():
        import netCDF4
        import os
        from datetime import datetime, timedelta
    
        t_test = 432.0*np.arange(10000.0)
    
        # pathological start date
        nc = netCDF4.Dataset('test.nc', 'w')
        nc.createDimension('time', 10000)
        nc.createVariable('time', 'f8', ('time',))
        nc.variables['time'].units = 'seconds since 0000-01-01 00:00:00'
        nc.variables['time'][:] = t_test
        nc.close()
    
        t = time('test.nc')
        assert np.allclose(t.days, t_test/86400.0)
        print t.jd
        print t.dates
        print t.utime.calendar
        os.remove('test.nc')
    
        # normal start date
        nc = netCDF4.Dataset('test.nc', 'w')
        nc.createDimension('time', 10000)
        nc.createVariable('time', 'f8', ('time',))
        nc.variables['time'].units = 'seconds since 1970-01-01 00:00:00'
        nc.variables['time'][:] = t_test
        nc.close()
    
        t = time('test.nc')
        assert np.allclose(t.days, t_test/86400.0)
        print t.jd
        print t.dates
        print t.utime.calendar
    
        do = datetime(1970,1,1,23,3,3)
        dtest = t.nearest_date(do)
        print do, dtest
        itest = t.arg_nearest_date(do)
        print itest
        print do, t.dates[itest-1:itest+2]
    
        ttest = t.nearest(t_test[50]+1.0)
        print ttest, t_test[50]
    
        itest = t.arg_nearest(t_test[50]+1)
        print 50, itest
    
        os.remove('test.nc')

    time_test()
