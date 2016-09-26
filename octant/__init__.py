# encoding: utf-8
'''
OCTANT is a toolkit for working with ocean models on a C-Grid

Octant (Ocean C-grid model seTup and Analysis Toolkit) is based on the
python/numpy/matplotlib scientific python suite. NetCDF I/O is based on the
NetCDF4-python package. The toolkit contains general modeling tools for dealing
with arrays, diagnosing standard properties, curvilinear grid generation, and
interpolation. Specific tools are also included for ROMS and GETM.

'''

from .depths import get_Vstretching_1, get_Vstretching_2, get_Vstretching_3, \
                    get_Vstretching_4, get_Vstretching, get_Vtransform_1, \
                    get_Vtransform_2, get_depths, get_sw, get_srho, get_s, \
                    get_zw, get_zrho, get_Hz
from .tools import rot2d, nanmask, shrink, plfilt, hgrad
from .wvelocity import omegaHz_velocity, w_velocity
from .seawater import psu2reference_salinity, o2_saturation, rho_stp


__authors__ = ['Robert Hetland <hetland@tamu.edu>',
               'Richard Hofmeister <richard.hofmeister@io-warnemuende.de>']

__version__ = '0.2.0'
