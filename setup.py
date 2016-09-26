"""Octant is a suite of tools for working with ocean models.

Requires:
    NumPy (http://numpy.scipy.org)
    netCDF4 (http://www.cdc.noaa.gov/people/jeffrey.s.whitaker/python/netCDF4.html)

Subpackages:

depths:
    get_Vstretching_1, get_Vstretching_2, get_Vstretching_3, \
    get_Vstretching_4, get_Vstretching, get_Vtransform_1, \
    get_Vtransform_2, get_depths, get_sw, get_srho, get_s, \
    get_zw, get_zrho, get_Hz

tools:
    rot2d, nanmask, shrink, plfilt, hgrad

wvelocity:
    omegaHz_velocity, w_velocity

seawater:
    psu2reference_salinity, o2_saturation, rho_stp
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
          packages = ['octant'],
          license = 'BSD',
          platforms = ["any"],
          ext_package='octant',
          ext_modules = [iso],
          classifiers = filter(None, classifiers.split("\n")),
          )
