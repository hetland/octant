import netCDF4
from numpy import asarray

class bdy2d(object):

    _tname='time'
    _nbdyname='nbdyp'
    _eunits='m'

    def __init__(self,filename='bdy_2d.nc',mode='r',timeunits=None,nbdy=None,updatefields=False):
        """
        open GETM bdy2d file
        """
        self._filename=filename
        self._filemode=mode
        self._updatefields=updatefields

        self._ncdf=netCDF4.Dataset(self._filename,mode=mode)

        if mode=='r' | mode == 'r+' | mode=='a':
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
                self._ncdf.createDimension(self._nbdyname,'i')
                self._ncdf.createVariable(self._ename,'f8',(self._tname,self._nbdyname))
                self._ncdf.variables[self._ename].units=self._eunits

        return self

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
        data=asarray(data)
        nmax=data.shape[0]
        if self._nbdy == None:
            self._nbdy=nmax
            self._ncdf.createDimension(nbdyname,'i')
            self._ncdf.createVariable(ename,'f8',(tname,nbdyname))
            self._ncdf.variable[ename].units=eunits

        if nmax == self._nbdy:
            if tind == None:
                tind = self.tnum
            self._ncdf.variables[ename][tind,:]=data
            self._ncdf.variables[tname][tind]=time
            self._tnum+=1
            self._ncdf.sync()

            if self._updatefields:
                self.elev=self._variables[ename][:]
                self.time=self._variables[tname][:]
        else:
            print "ERROR: length of data has to fit nbdy = ",self_nbdy
        
    def get_nbdy(self):
        return self._nbdy
    def get_tnum(self):
        return self._tnum

    nbdy=property(get_nbdy,None,"Number of boundary steps")
    tnum=property(get_tnum,None,"Number of timesteps")

