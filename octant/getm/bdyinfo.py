
class Bdyinfo(object):
    """
    Bdyinfo(filename): handle for GETM bdyinfo file/definition

    The Bdyinfo returns an object connected to a
    GETM bdyinfo file (usually bdyinfo.dat). It basically
    reads in the bdyinfo file specified with the filename
    and knows the list of indices in the right order for
    reading/writing Grids and Datasets
    """
    from numpy import ones

    def __init__(self,filename='bdyinfo.dat'):
        """
        read the GETM bdyinfo file
        """
        bdy=open(filename)
        self.filename=filename
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
                  i=(int(spec[0])-1)*ones((end-start+1),dtype='i')
                  indlist.extend(zip(i,j))
              elif d == 1: #northern boundary
                  start=int(spec[1])-1
                  end=int(spec[2])-1
                  i=range(start,end+1)
                  j=(int(spec[0])-1)*ones((end-start+1),dtype='i')
                  indlist.extend(zip(i,j))
              elif d == 2: #eastern boundary
                  start=int(spec[1])-1
                  end=int(spec[2])-1
                  j=range(start,end+1)
                  i=(int(spec[0])-1)*ones((end-start+1),dtype='i')
                  indlist.extend(zip(i,j))
              elif d == 3: #southern boundary
                  start=int(spec[1])-1
                  end=int(spec[2])-1
                  j=range(start,end+1)
                  i=(int(spec[0])-1)*ones((end-start+1),dtype='i')
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

