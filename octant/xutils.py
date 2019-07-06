'''
Utilities to work with ROMS output using xarray as a basis

Contains:

    xdepths - lazy calculation of roms depths from a netcdf file
              with an xarray-like interface


'''
import copy

class xdepths(object):

    def __init__(self, ds, grid='rho'):
        """Class for calculating depths in ROMS using xarray

        Instantiation:
        z = octant.xdepths(ds, grid)

        where ds is an xarray dataset, and grid is either 'rho' or 'w'

        Methods:

        z.sel(dim=range)   # passes through to ds.zeta
        z.isel(dim=index)  # passes through to ds.zeta

        Attributes:

        z.values  # calculates the depths give the current selection by methods
        z.Zo      # returns the depths with zeta=0
        """

        self.zeta = ds.zeta

        if grid == 'rho':
            self.C =  ds.Cs_r
            self.s = ds.s_rho
        elif grid == 'w':
            self.C = ds.Cs_w
            self.s = ds.s_w
        else:
            raise "grid must be 'rho' or 'w'"

        self.h = ds.h

        self.hc = float(ds.hc.values)

        self.Vtransform = int(ds.Vtransform.values)

        if self.Vtransform == 1:
            self.Zo = self.hc * (self.s - self.C) + self.C * self.h
        elif self.Vtransform == 2:
            self.Zo = (self.hc * self.s + self.C * self.h) / (self.hc + self.h)
        else:
            raise "Only Vtransform 1 and 2 are supported"

    def sel(self, **kwargs):
        newobj = copy.copy(self)
        for key, val in kwargs.items():
            if (key in newobj.zeta.dims) or (key in newobj.zeta.coords.keys()):
                newobj.zeta = newobj.zeta.sel(**{key: val})
            if (key in newobj.h.dims) or (key in newobj.h.coords.keys()):
                newobj.h = newobj.h.sel(**{key: val})
            if (key in newobj.Zo.dims) or (key in newobj.Zo.coords.keys()):
                newobj.Zo = newobj.Zo.sel(**{key: val})
        return newobj

    def isel(self, **kwargs):
        newobj = copy.copy(self)
        for key, val in kwargs.items():
            if (key in newobj.zeta.dims) or (key in newobj.zeta.coords.keys()):
                newobj.zeta = newobj.zeta.isel(**{key: val})
            if (key in newobj.h.dims) or (key in newobj.h.coords.keys()):
                newobj.h = newobj.h.isel(**{key: val})
            if (key in newobj.Zo.dims) or (key in newobj.Zo.coords.keys()):
                newobj.Zo = newobj.Zo.isel(**{key: val})
        return newobj

    @property
    def dataarray(self):
        if self.Vtransform == 1:
            return self.Zo + self.zeta * (1 + self.Zo/self.h)
        elif self.Vtransform == 2:
            return self.zeta + (self.zeta + self.h) * self.Zo

    @property
    def values(self):
        if self.Vtransform == 1:
            return (self.Zo + self.zeta * (1 + self.Zo/self.h)).values
        elif self.Vtransform == 2:
            return (self.zeta + (self.zeta + self.h) * self.Zo).values

    def __repr__(self):
        return repr(self.zeta) + '\n' + repr(self.Zo) + '\n' + repr(self.h)


# z = xdepths(ds)
# znew = z.sel(ocean_time='2008-07-04 12:00')
# znew.values
