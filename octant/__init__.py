''' 
Ocemopy is a toolkit for working with ocean models on a C-Grid

Ocemopy is based on the python/numpy/matplotlib scientific python suite.
NetCDF I/O is based on the NetCDF4-python package.

The toolkit contains general modeling tools for dealing with arrays,
diagnosing standard properties, curvilinear grid generation, and
interpolation. Specific tools are also included for ROMS and GETM.

Subpackages:

    grid  -  Tools for dealing with curvilinear grids
      BoundaryInteractor
      CGrid
      Focus
      Gridgen

    extern -  External, but useful tools.
      PolygonGeometry
      PolygonInteractor
      GreatCircle
      pupynere

    io
      Dataset
      MFDataset
     
    cf
      CFTime
    
    tools
      rot2d
      nanmask
      shrink
    
    
    Things to be implemented in the future:
    # ocean
    #   depths
    #   velocity
    #   time
    # 
    # roms -  Tools specific to the Regional Ocean Modeling System
    #   nc_variables
    #   write_roms_grid
    # 
    # getm - Tools specific to the General Estuarine Transport Model
    #   nc_variables
    #   write_getm_grid


'''

#from grid import CGrid, BoundaryInteractor, Focus, FocusPoint
import cf
import depths
import extern
import grid
import io
import ocean
import tools
import sw

__authors__ = ['Robert Hetland <hetland@tamu.edu>',
               'Richard Hofmeister <richard.hofmeister@io-warnemuende.de>']
               
__version__ = '0.1.0'
