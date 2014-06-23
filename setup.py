"""Octant is a suite of tools for working with ocean models.

Requires:
    NumPy (http://numpy.scipy.org)
    matplotlib with the Basemap toolkit (http://matplotlib.sourceforge.net)
    netCDF4 (http://www.cdc.noaa.gov/people/jeffrey.s.whitaker/python/netCDF4.html)

Contains:
    grid  -  Tools for dealing with curvilinear grids
      gridgen
      focus
      boundaryclick
      Grid
      gshhs
      greatcircle

    tools -  Generic tools.
      polygeom
      polyclick
      delaunay

    io
      pupynere
      Dataset

    ocean
      depths
      velocity
      time

    roms -  Tools specific to the Regional Ocean Modeling System
      nc_variables
      write_roms_grid

    getm - Tools specific to the General Estuarine Transport Model
      nc_variables
      write_getm_grid
"""

classifiers = """\
Development Status :: beta
Environment :: Console
Intended Audience :: Science/Research
Intended Audience :: Developers
License :: MIT
Operating System :: OS Independent
Programming Language :: Python
Topic :: Scientific/Engineering
Topic :: Software Development :: Libraries :: Python Modules
"""

from numpy.distutils.core import Extension

iso = Extension(name = '_iso',
                sources = ['octant/src/iso.f'])

# csa = Extension(name = '_csa',
#                 sources=["octant/src/csa/csa.c",
#                          "octant/src/csa/svd.c"])

doclines = __doc__.split("\n")

if __name__ == '__main__':
    from numpy.distutils.core import setup
    setup(name = "octant",
          version = '0.1.0',
          description = doclines[0],
          long_description = "\n".join(doclines[2:]),
          author = "Robert Hetland",
          author_email = "hetland@tamu.edu",
          url = "http://octant.googlecode.com/",
          packages = ['octant',
                      'octant.extern',
                      'octant.ocean'],
          license = 'BSD',
          platforms = ["any"],
          ext_package='octant',
          ext_modules = [iso],
          # ext_modules = [iso, csa],
          classifiers = filter(None, classifiers.split("\n")),
          )
    
