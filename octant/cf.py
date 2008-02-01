"""
cf.py - classes around CF compliant files

The cf module is made for reading CF-compliant datasets,
knowing data, its structure, units and conversions
between units afterwards.

Classes:
========
CFTime - getting a datetime array from a CF-compl. netCDF Dataset

Dependencies:
=============
numpy
pylab
dateutil
datetime
"""

import numpy as np
import datetime
from dateutil.parser import parse
from pylab import date2num,num2date
from octant.io import Dataset

class CFTime (np.ndarray):
    
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

    def __new__(self, ncfile, name='ocean_time', units=None, **kwargs):
        self._nc = Dataset(ncfile)
        data = self._nc.variables[name][:]
        if units == None:
            self._units = self._nc.variables[name].units
        else:
            self._units = units
        
        units_split=self._units.split(' ',2)
        assert len(units_split) == 3 and units_split[1] == 'since', \
            'units string improperly formatted\n' + self._units
        self.origin=parse(units_split[2])
        
        self._units = units_split[0].lower()
        
        # compatibility to CF convention v1.0/udunits names:
        if self._units in ['second','sec','secs','s']:
            self._units='seconds'
        if self._units in ['min','minute','mins']:
            self._units='minutes'
        if self._units in ['h','hs','hr','hrs','hour']:
            self._units='hours'
        if self._units in ['day','d','ds']:
            self._units='days'

        return data.view(ocean_time)
    
    def nearest_index(self, dateo):
        to = date2num(dateo)
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
        return num2date(self.jd[self.nearest_index(dateo)][0])
    
    def get_seconds(self):
        fac = self._unit2sec[self._units] * self._sec2unit['seconds']
        return self*fac
    
    def get_minutes(self):
        fac = self._unit2sec[self._units] * self._sec2unit['minutes']
        return self*fac

    def get_hours(self):
        fac = self._unit2sec[self._units] * self._sec2unit['hours']
        return self*fac
    
    def get_days(self):
        fac = self._unit2sec[self._units] * self._sec2unit['days']
        return np.asarray(self,dtype='float64')*fac
    
    def get_jd(self):
        return (date2num(self.origin)+self.days)

    def get_dates(self):
        return num2date(self.jd)
        
    jd = property(get_jd, None, doc="Julian day, for plotting in pylab")
    seconds = property(get_seconds, None, doc="seconds")
    minutes = property(get_minutes, None, doc="minutes")
    hours = property(get_hours, None, doc="hours")
    days = property(get_days, None, doc="days")
    dates = property(get_dates, None, doc="datetime objects")

