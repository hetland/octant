'''
OCTANT is a toolkit for working with ocean models on a C-Grid

Octant (Ocean C-grid model seTup and Analysis Toolkit) is based on the
python/numpy/matplotlib scientific python suite. NetCDF I/O is based on the
NetCDF4-python package. The toolkit contains general modeling tools for dealing
with arrays, diagnosing standard properties, working with curvilinear grids, and
interpolation. Specific tools are included for ROMS.

'''


from .depths import get_Vstretching, get_depths, get_s, \
                    get_zw, get_zrho, get_Hz
from .grid import CGrid, CGrid_geo, rho_to_vert, uvp_masks
from .roms import nc_gls_dissipation, nc_N2, nc_curl, nc_div, \
                  nc_pstrain, nc_grid, nc_depths, nc_velocity
from .seawater import psu2reference_salinity, o2_saturation, rho_stp
from .slice import isoslice, zslice, iso_integrate, surface
from .tools import rot2d, nanmask, shrink, plfilt, hgrad
from .wvelocity import omegaHz_velocity, w_velocity


__authors__ = ['Robert Hetland <hetland@tamu.edu>']

__version__ = '0.3.0'
