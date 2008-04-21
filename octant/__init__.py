# encoding: utf-8
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

    extern -  Packages from other places.
      PolygonGeometry
      PolygonInteractor
      GreatCircle
      pupynere
    
    io - wrappers around netCDF4 with pass-through of netCDF4 objects
      Dataset
      MFDataset
     
    cf
      time
    
    tools - Miscilanious useful tools
      rot2d
      nanmask
      shrink
    
    sw - UNESCO seawater tools (seawater 1.1 by Bjørn Ådlandsvik)

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
