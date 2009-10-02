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

csa = Extension(name = '_csa',
                sources=["octant/src/csa/csa.c",
                         "octant/src/csa/svd.c"])

gridgen = Extension(name = '_gridgen',
                    extra_compile_args=['-O2', ],
                    sources=["octant/src/gridgen/csa.c",
                             "octant/src/gridgen/svd.c",
                             "octant/src/gridgen/delaunay.c",
                             "octant/src/gridgen/hash.c",
                             "octant/src/gridgen/istack.c",
                             "octant/src/gridgen/lpi.c",
                             "octant/src/gridgen/minell.c",
                             "octant/src/gridgen/nnai.c",
                             "octant/src/gridgen/nnbathy.c",
                             "octant/src/gridgen/nncommon.c",
                             "octant/src/gridgen/nncommon-vulnerable.c",
                             "octant/src/gridgen/nnpi.c",
                             "octant/src/gridgen/preader.c",
                             "octant/src/gridgen/triangle.c",
                             "octant/src/gridgen/gridmap.c",
                             "octant/src/gridgen/gucommon.c",
                             "octant/src/gridgen/poly.c",
                             "octant/src/gridgen/broyden.c",
                             "octant/src/gridgen/geom.c",
                             "octant/src/gridgen/gridgen.c",
                             "octant/src/gridgen/gridnodes.c",
                             "octant/src/gridgen/issimplepoly.c",
                             "octant/src/gridgen/ode.c",
                             "octant/src/gridgen/swcr.c",
                             "octant/src/gridgen/vertlist.c",
                             "octant/src/gridgen/zode.c",])

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
                      'octant.ocean',
                      'octant.sw'],
          license = 'BSD',
          platforms = ["any"],
          ext_package='octant',
          ext_modules = [iso, csa, gridgen],
          classifiers = filter(None, classifiers.split("\n")),
          )
    
