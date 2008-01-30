import netCDF4
from numpy import asarray
from ocemopy import shrink

class topo(self):

    gtname='grid_type'
    bname='bathymetry'
    latname='latc'
    lonname='lonc'
    latxname='latx'
    lonxname='lonx'
    xname='xc'
    yname='yc'
    xxname='xx'
    yxname='yx'
    convxname='convx'

    def __init__(self,filename,mode='r'):
        """
        open a GETM topo file
        """
        self.filename=filename
        self._filemode=mode

        self._ncdf=netCDF4.Dataset(filename,mode=mode)

        if mode=='r' | mode == 'r+' | mode=='a':
            self.gridtype=self._ncdf.variables['gridtype']
            bathv=self._ncdf.variables['bathymetry']
            dims=bathv.dimensions
            self.ynum=len(self._nc.dimensions[dims[0]])
            self.xnum=len(self._nc.dimensions[dims[1]])
            self.h=bathv[:]

#            if self.gridtype == 1:
# cartesian grid
#                self.yvec=self._ncdf.variables[dim[0]].[:]
#                self.xvec=self._ncdf.variables[dim[1]].[:]
#            elif self.gridtype == 2:
## spherical grid
#                self.latvec=self._ncdf.variables[dim[0]].[:]
#                self.lonvec=self._ncdf.variables[dim[1]].[:]
#            elif  self.gridtype == 3:
## curvilinear grid
#                self.xx=self._ncdf.variables[xxname].[:]
#                self.yx=self._ncdf.variables[yyname].[:]
#                self.convx=self._ncdf.variables[convxname][:]
#                self.xnum_edges=self.xnum+1
#                self.ynum_edges=self.ynum+1
#            elif  self.gridtype == 4:
## spherical, curvilinear grid
#                self.xx=self._ncdf.variables[xxname].[:]
#                self.yx=self._ncdf.variables[yxname].[:]
#                self.latx=self._ncdf.variables[latxname].[:]
#                self.lonx=self._ncdf.variables[lonxname].[:]
#                self.convx=self._ncdf.variables[convxname][:]
#                self.xnum_edges=self.xnum+1
#                self.ynum_edges=self.ynum+1
#
        elif mode =='w':
            print "mode = 'w' does not work yet"

            #self._ncdf.createDimension(tname,None)
            #self._ncdf.createVariable(tname,'f8',(tname,))
            #if timeunits!=None:
            #    self._ncdf.variables[tname].units=timeunits
            #    self.timeunits=timeunits
            #self._tnum=0
            #self._nbdy=nbdy
            #if nbdy!= None:
            #    self._ncdf.createDimension(nbdyname,'i')
            #    self._ncdf.createVariable(ename,'f8',(tname,nbdyname))
            #    self._ncdf.variables[ename].units=eunits

        return self

    def findlonlat(self,indlist):
      """
      find list of (lon,lat) for a given list of indices
      in a GETM topo file
      """
      i,j=zip(*indlist)
      lats=shrink(self.latx,(self.ynum,self.xnum))
      lons=shrink(self.lonx,(self.ynum,self.xnum))
      lonlatlist=zip(lons[j,i],lats[j,i])

      return lonlatlist

