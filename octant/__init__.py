# encoding: utf-8
''' 
OCTANT is a toolkit for working with ocean models on a C-Grid

Octant (Ocean C-grid model seTup and Analysis Toolkit) is based on the
python/numpy/matplotlib scientific python suite. NetCDF I/O is based on the
NetCDF4-python package. The toolkit contains general modeling tools for dealing
with arrays, diagnosing standard properties, curvilinear grid generation, and
interpolation. Specific tools are also included for ROMS and GETM.

External tools included for convinience include:
    
    delaunay : Delaunay interpolation
        Available at http://scipy.org/scipy/scikits
    
    sw : UNESCO seawater tools (seawater 1.1 by Bjørn Ådlandsvik)
        Available at http://www.imr.no/~bjorn/python/seawater/index.html

'''

import cf
import csa
import depths
import extern
import grid
import io
import ocean
import tools
import sw

__authors__ = ['Robert Hetland <hetland@tamu.edu>',
               'Richard Hofmeister <richard.hofmeister@io-warnemuende.de>']
               
__version__ = '0.2.0'
