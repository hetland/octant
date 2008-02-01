"""
octant/getm - octant tools for GETM

The getm module includes some very specific tools
for the General Estuarine Transport Model (www.getm.eu).

Included classes:
=================
Bdyinfo - handle for a bdyinfo file object
Bdy2d - handle for creating and filling a bdy_2d.nc file

Dependencies:
=============
netCDF4 (as it is now, the only included netCDF library)
numpy

"""
import numpy as np
import netCDF4

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

