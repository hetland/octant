"""
octant/getm - octant tools for GETM

The getm module includes some very specific tools
for the General Estuarine Transport Model (www.getm.eu).

Included classes:
=================
Bdyinfo - handle for a bdyinfo file object
Bdy2d - handle for creating and filling of a bdy_2d.nc file
Bdy3d - handle for creating and filling of a bdy_3d.nc file

Dependencies:
=============
netCDF4 (as it is now, the only included netCDF library)
numpy

"""
import numpy as np
import netCDF4
from octant.tools import Transect_extrapolator,shrink
import pylab as pl

class Bdyinfo(object):
    """
    Bdyinfo(filename): handle for GETM bdyinfo file/definition

    The Bdyinfo returns an object connected to a
    GETM bdyinfo file (usually bdyinfo.dat). It basically
    reads in the bdyinfo file specified with the filename
    and knows the list of indices in the right order for
    reading/writing Grids and Datasets
    """


    def __init__(self,filename='bdyinfo.dat'):
        """
        read the GETM bdyinfo file
        """

        bdy=open(filename)
        self._filename=filename
        indlist=[]

        for d in range(4):
          line=bdy.readline()
          for nbdy in range(int(line)):
              specs=bdy.readline()
              spec=specs.split()
              if d == 0: # western boundary
                  start=int(spec[1])-1
                  end=int(spec[2])-1
                  j=range(start,end+1)
                  i=(int(spec[0])-1)*np.ones((end-start+1),dtype='i')
                  indlist.extend(zip(i,j))
              elif d == 1: #northern boundary
                  start=int(spec[1])-1
                  end=int(spec[2])-1
                  i=range(start,end+1)
                  j=(int(spec[0])-1)*np.ones((end-start+1),dtype='i')
                  indlist.extend(zip(i,j))
              elif d == 2: #eastern boundary
                  start=int(spec[1])-1
                  end=int(spec[2])-1
                  j=range(start,end+1)
                  i=(int(spec[0])-1)*np.ones((end-start+1),dtype='i')
                  indlist.extend(zip(i,j))
              elif d == 3: #southern boundary
                  start=int(spec[1])-1
                  end=int(spec[2])-1
                  j=range(start,end+1)
                  i=(int(spec[0])-1)*np.ones((end-start+1),dtype='i')
                  indlist.extend(zip(i,j))
        
        bdy.close()
        self._indlist=indlist

    def get_indlist(self):
        return self._indlist

    def get_filename(self):
        return self._filename

    indlist=property(get_indlist, None, \
            doc="list of indices in the GETM bdyinfo file")
    filename=property(get_filename, None, \
            doc="file name of GETM bdyinfo file")

class Bdy2d(object):
    """
    Bdy2d(filename) GETM 2D boundary file class
    """

    _tname='time'
    _nbdyname='nbdyp'
    _eunits='m'
    _ename='elev'

    def __init__(self,filename='bdy_2d.nc',mode='r',timeunits=None,nbdy=None,updatefields=False):
        """
        open GETM bdy2d file

        filename - the GETM bdy3d netcdf file name string
        mode - 'r' for read-only, 'r+' or 'a' for append, 'w' for create or overwrite
        timeunits - CF units string of time variable
        nbdy - number of boundary points
        updatefields - boolean; should ncdf fields be updated in the python workspace? 
        """

        self._filename=filename
        self._filemode=mode
        self._updatefields=updatefields

        self._ncdf=netCDF4.Dataset(self._filename,mode=mode,format='NETCDF3_CLASSIC')

        if mode=='r' or mode == 'r+' or mode=='a':
            self._tnum=len(self._ncdf.dimensions[self._tname])
            self._nbdy=len(self._ncdf.dimensions[self._nbdyname])
            self.elev=self._ncdf.variables[self._ename][:]
            self.time=self._ncdf.variables[self._tname][:]
            self.timeunits=self._ncdf.variables[self._tname].units
            self.elevunits=self._ncdf.variables[self._ename].units
        elif mode =='w':
            self._ncdf.createDimension(self._tname,None)
            self._ncdf.createVariable(self._tname,'f8',(self._tname,))
            if timeunits!=None:
                self._ncdf.variables[self._tname].units=timeunits
                self._timeunits=timeunits
            self._tnum=0
            self._nbdy=nbdy
            if nbdy!= None:
                self._ncdf.createDimension(self._nbdyname,nbdy)
                self._ncdf.createVariable(self._ename,'f8',\
                        (self._tname,self._nbdyname))
                self._ncdf.variables[self._ename].units=self._eunits
        self._ncdf.sync()

    def close(self):
        """
        close GETM bdy2d file
        """
        self._ncdf.close()

    def putdata(self,time,data,tind=None):
        """
        put elevation data for one timestep
        into GETM bdy2d file. time has to be a float number,
        data has to be a 1D float list or array.
        """

        data=np.asarray(data)
        nmax=data.shape[0]
        if self._nbdy == None:
            self._nbdy=nmax
            self._ncdf.createDimension(self._nbdyname,'i')
            self._ncdf.createVariable(self._ename,'f8',(self._tname,self._nbdyname))
            self._ncdf.variable[self._ename].units=self._eunits

        if nmax == self._nbdy:
            if tind == None:
                tind = self.tnum
            self._ncdf.variables[self._ename][tind,:]=data
            self._ncdf.variables[self._tname][tind]=time
            self._tnum+=1
            self._ncdf.sync()

            if self._updatefields:
                self.elev=self._variables[self._ename][:]
                self.time=self._variables[self._tname][:]
        else:
            print "ERROR: length of data has to fit nbdy = ",self_nbdy
        
    def get_nbdy(self):
        return self._nbdy
    def get_tnum(self):
        return self._tnum

    nbdy=property(get_nbdy,None,doc="Number of boundary steps")
    tnum=property(get_tnum,None,doc="Number of timesteps")

class Bdy3d(object):
    """
    Bdy3d(filename) GETM 3D boundary file class
    """

    _tname='time'
    _nbdyname='nbdyp'
    _eunits='m'
    _zname='zax'

    def __init__(self,filename='bdy_3d.nc',mode='r',timeunits=None,nbdy=None,zax=None,updatefields=False):
        """
        open GETM bdy3d file

        filename - the GETM bdy3d netcdf file name string
        mode - 'r' for read-only, 'r+' or 'a' for append, 'w' for create or overwrite
        timeunits - CF units string of time variable
        nbdy - number of boundary points
        zax - vector of z-levels (positive, increasing depths)
        updatefields - boolean; should ncdf fields be updated in the python workspace? 
        """

        self._filename=filename
        self._filemode=mode
        self._updatefields=updatefields

        self._ncdf=netCDF4.Dataset(self._filename,mode=mode,format='NETCDF3_CLASSIC')

        if mode=='r' or mode == 'r+' or mode=='a':
            self._tnum=len(self._ncdf.dimensions[self._tname])
            self._nbdy=len(self._ncdf.dimensions[self._nbdyname])
            self._znum=len(self._ncdf.dimensions[self._zname])
            self.time=self._ncdf.variables[self._tname][:]
            self.zax=self._ncdf.variables[self._zname][:]
            self.timeunits=self._ncdf.variables[self._tname].units
            self.zaxunits=self._ncdf.variables[self._zname].units
        elif mode =='w':
            self._ncdf.createDimension(self._tname,None)
            self._ncdf.createVariable(self._tname,'f8',(self._tname,))
            if timeunits!=None:
                self._ncdf.variables[self._tname].units=timeunits
                self._timeunits=timeunits
            self._tnum=0
            self._nbdy=nbdy
            if zax==None:
                print "you have to specify a zax vector!"
            else:
                self._ncdf.createDimension(self._zname,len(zax))
                zvar=self._ncdf.createVariable(self._zname,'f8',(self._zname,))
                zvar[:]=zax
                self.zax=self._ncdf.variables[self._zname][:]
                self._znum=len(zax)
            if nbdy!= None:
                self._ncdf.createDimension(self._nbdyname,nbdy)
                self._nbdy=nbdy
        self._ncdf.sync()

    def close(self):
        """
        close GETM bdy3d file
        """
        self._ncdf.close()

    def addvar(self,var,units=None,const=None):
        """
        add variable to GETM bdy3d file

        var - variable name string
        units - CF units string
        const - has to be a float value. If set, then the data-array is filled with const
        """
        varvar=self._ncdf.createVariable(var,'f8', \
                (self._tname,self._nbdyname,self._zname))
        varvar.units=units
        if const!=None:
            varvar[:]=np.ones((self._tnum,self._nbdy,self._znum), \
                    dtype='f8')*float(const)
        self._ncdf.sync()


    def putdata(self,time,varname,data,tind=None):
        """
        put data for one timestep into GETM bdy3d file.
        
        time - a float number in the units of variable time,
        varname - the variable name string of an existing variable
        data - a 2D float list or array to be put into the bdy3d file.
        """

        data=np.asarray(data)
        nmax,zmax=data.shape
        if self._nbdy == None:
            self._nbdy=nmax
            self._ncdf.createDimension(self._nbdyname,'i')
            self.addvar(varname,'f8',(self._tname,self._nbdyname,self._zname))

        if nmax == self._nbdy and zmax == self._znum:
            if tind == None:
                if self.tnum == 0:
                    tind = 0
                else:
                    tind = self.tnum-1
            self._ncdf.variables[varname][tind,:,:]=data
            if tind == self.tnum:
                self._ncdf.variables[self._tname][tind]=time
                self._tnum=self._tnum+1
            self._ncdf.sync()
        else:
            print "ERROR: length of data has to fit nbdy = ",self._nbdy," and znum = ",self._znum
        
    def get_nbdy(self):
        return self._nbdy
    def get_tnum(self):
        return self._tnum
    def get_znum(self):
        return self._znum

    nbdy=property(get_nbdy,None,doc="Number of boundary steps")
    tnum=property(get_tnum,None,doc="Number of timesteps")
    znum=property(get_znum,None,doc="Number of z-levels")

class Transect(Transect_extrapolator):
    """
    GETM Transect class

    Creates a transect object out of a GETM output
    netcdf file and a list of lon/lat tuples.
    """
    def __init__(self, ncgrid, verts, proj=None):
        
        if proj is None:
            self.proj = Basemap(projection='merc', resolution=None, lat_ts=0.0)
        else:
            self.proj = proj
        
        nc = netCDF4.Dataset(ncgrid)
        gridtype=int(nc.variables['grid_type'][0])
        if gridtype == 2:
            lat = nc.variables['lat'][:]
            lon = nc.variables['lon'][:]
            h = nc.variables['bathymetry'][:,:]
            mask = h == nc.variables['bathymetry'].missing_value
        elif gridtype == 4:
            lat = nc.variables['latx'][:]
            lon = nc.variables['lonx'][:]
            h = nc.variables['bathymetry'][:,:]
            lat=shrink(lat,h.shape)
            lon=shrink(lon,h.shape)
            mask = h == nc.variables['bathymetry'].missing_value
        elif gridtype == 1:
            x = nc.variables['xc']
            y = nc.variables['yc']
            h = nc.variables['bathymetry'][:]
            mask = h == nc.variables['bathymetry'].missing_value
        elif gridtype == 3:
            x = nc.variables['xx'][:]
            y = nc.variables['yx'][:]
            h = nc.variables['bathymetry'][:,:]
            x=shrink(x,h.shape)
            y=shrink(y,h.shape)
            mask = h == nc.variables['bathymetry'].missing_value
        nc.close()
        
        if gridtype == 2 or gridtype == 4:
            (lonm,latm)=pylab.meshgrid(lon,lat)
            x, y = self.proj(lonm[~mask], latm[~mask])
            lonv, latv = zip(*verts)
            xv, yv = self.proj(lonv, latv)
        elif gridtype == 1 or gridtype == 3:
            (x,y) = pl.meshgrid(x,y)
            xv,yv = zip(*verts)
             
        verts = zip(xv, yv)
        
        super(Transect, self).__init__(x, y, verts)


