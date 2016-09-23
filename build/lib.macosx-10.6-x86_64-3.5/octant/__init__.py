# encoding: utf-8
'''
OCTANT is a toolkit for working with ocean models on a C-Grid

Octant (Ocean C-grid model seTup and Analysis Toolkit) is based on the
python/numpy/matplotlib scientific python suite. NetCDF I/O is based on the
NetCDF4-python package. The toolkit contains general modeling tools for dealing
with arrays, diagnosing standard properties, curvilinear grid generation, and
interpolation. Specific tools are also included for ROMS and GETM.

'''

from .depths import *
from .grid import *
from .ocean import *
from .tools import *

__authors__ = ['Robert Hetland <hetland@tamu.edu>',
               'Richard Hofmeister <richard.hofmeister@io-warnemuende.de>']

__version__ = '0.2.0'
