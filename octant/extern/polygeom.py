#!/usr/bin/env python
# encoding: utf-8
"""Polygon geometry.

Copyright (C) 2006, Robert Hetland
Copyright (C) 2006, Stefan van der Walt

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the
   distribution.
3. The name of the author may not be used to endorse or promote
   products derived from this software without specific prior written
   permission.

THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.
"""

import numpy as np
import sys

try:
    import scipy.weave as weave
    
    def npnpoly(verts,points):
        verts = verts.astype(np.float64)
        points = points.astype(np.float64)

        xp = np.ascontiguousarray(verts[:,0])
        yp = np.ascontiguousarray(verts[:,1])
        x = np.ascontiguousarray(points[:,0])
        y = np.ascontiguousarray(points[:,1])
        out = np.empty(len(points),dtype=np.uint8)

        code = """
        /* Code from:
           http://www.ecse.rpi.edu/Homepages/wrf/Research/Short_Notes/pnpoly.html
    
           Copyright (c) 1970-2003, Wm. Randolph Franklin
    
           Permission is hereby granted, free of charge, to any person
           obtaining a copy of this software and associated documentation
           files (the "Software"), to deal in the Software without
           restriction, including without limitation the rights to use, copy,
           modify, merge, publish, distribute, sublicense, and/or sell copies
           of the Software, and to permit persons to whom the Software is
           furnished to do so, subject to the following conditions:
    
        	1. Redistributions of source code must retain the above
                 copyright notice, this list of conditions and the following
                 disclaimers.
        	2. Redistributions in binary form must reproduce the above
                 copyright notice in the documentation and/or other materials
                 provided with the distribution.
        	3. The name of W. Randolph Franklin may not be used to endorse
                 or promote products derived from this Software without
                 specific prior written permission. 
    
           THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
           EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
           MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
           NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
           BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
           ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
           CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
           SOFTWARE. */
       
        int i,j,n;
        unsigned int c;
        int nr_verts = Nxp[0];
        for (n = 0; n < Nx[0]; n++) {
            c = 0;
        	for (i = 0, j = nr_verts-1; i < nr_verts; j = i++) {
                if ((((yp(i)<=y(n)) && (y(n)<yp(j))) ||
                 	 ((yp(j)<=y(n)) && (y(n)<yp(i)))) &&
                	(x(n) < (xp(j) - xp(i)) * (y(n) - yp(i)) / (yp(j) - yp(i)) + xp(i)))
	    	
    	    	c = !c;
        	}
    	out(n) = c;
        }
        """
        weave.inline(code, ['xp','yp','x','y','out'],
                     type_converters=weave.converters.blitz)
        return out
except:
    # if scipy.weave is not available, use pure python routine.  Slow.
    def npnpoly(verts, points):
        """Check whether given points are in the polygon.
        
        points - Nx2 array
        
        See http://www.ecse.rpi.edu/Homepages/wrf/Research/Short_Notes/pnpoly.html    
        """
        out = []
        
        xpi = verts[:,0]
        ypi = verts[:,1]
        # shift        
        xpj = xpi[np.arange(xpi.size)-1]
        ypj = ypi[np.arange(ypi.size)-1]
        maybe = np.empty(len(xpi),dtype=bool)
        for x,y in points:
            maybe[:] = ((ypi <= y) & (y < ypj)) | ((ypj <= y) & (y < ypi))
            out.append(sum(x < (xpj[maybe]-xpi[maybe])*(y - ypi[maybe]) \
                           / (ypj[maybe] - ypi[maybe]) + xpi[maybe]) % 2)
        
        return np.asarray(out,dtype=bool)


class PolygonGeometry(np.ndarray):
    """
    Polygeom -- Polygon geometry class
    """

    def __new__(self, verts):
        """
        Given xp and yp (both 1D arrays or sequences), create a new polygon.
        
        p = Polygon(vertices) where vertices is an Nx2 array
        
        p.inside(x, y) - Calculate whether points lie inside the polygon.
        p.area() - The area enclosed by the polygon.
        p.centroid() - The centroid of the polygon
        """
        verts = np.atleast_2d(verts)
                
        assert verts.shape[1] == 2, 'Vertices should be an Nx2 array, but is %s' % str(verts.shape)
        assert len(verts) >= 3, 'Need 3 vertices to create polygon.'
        
        # close polygon, if needed
        if not np.all(verts[0]==verts[-1]):
            verts = np.vstack((verts,verts[0]))

        self.verts = verts
        
        return verts.view(Polygeom).copy()
    
    
    def inside(self,points):
        points = np.atleast_2d(points)
        assert points.shape[1] == 2, \
               "Points should be of shape Nx2, is %s" % str(points.shape)
        return npnpoly(self.verts,points).astype(bool)
    
    def get_area(self):
        """
        Return the area of the polygon.

        From Paul Bourke's webpage:
          http://astronomy.swin.edu.au/~pbourke/geometry
        """
        v = self.verts
        v_first = v[:-1][:,[1,0]]
        v_second = v[1:]
        return np.diff(v_first*v_second).sum()/2.0

    def get_centroid(self):
        "Return the centroid of the polygon"
        v = self.verts
        a = np.diff(v[:-1][:,[1,0]]*v[1:])
        area = a.sum()/2.0
        return ((v[:-1,:] + v[1:,:])*a).sum(axis=0) / (6.0*area)
    
    area = property(get_area)
    centroid = property(get_centroid)

if __name__ == '__main__':
    import pylab as pl
    grid = np.mgrid[0:1:10j,0:1:10j].reshape(2,-1).swapaxes(0,1)
    
    # simple area test
    verts = np.array([[0.15,0.15],
                      [0.85,0.15],
                      [0.85,0.85],
                      [0.15,0.85]])
    pa = Polygeom(verts)
    print pa.area
    print (0.85-0.15)**2
    
    print pa
    
    print pa.centroid
    
    # concave enclosure test-case for inside.
    verts = np.array([[0.15,0.15],
                      [0.25,0.15],
                      [0.45,0.15],
                      [0.45,0.25],
                      [0.25,0.25],
                      [0.25,0.55],
                      [0.65,0.55],
                      [0.65,0.15],
                      [0.85,0.15],
                      [0.85,0.85],
                      [0.15,0.85]])
    pb = Polygeom(verts)
    inside = pb.inside(grid)
    pl.plot(grid[:,0][inside], grid[:,1][inside], 'g.')
    pl.plot(grid[:,0][~inside], grid[:,1][~inside],'r.')
    pl.plot(pb.verts[:,0],pb.verts[:,1], '-k')
    print pb.centroid
    xc, yc = pb.centroid
    print xc, yc
    pl.plot([xc], [yc], 'co')
    pl.show()
    
    pl.figure()
    # many points in a semicircle, to test speed.
    grid = np.mgrid[0:1:1000j,0:1:1000j].reshape(2,-1).swapaxes(0,1)
    xp = np.sin(np.arange(0,np.pi,0.01))
    yp = np.cos(np.arange(0,np.pi,0.01))
    pc = Polygeom(np.hstack([xp[:,np.newaxis],yp[:,np.newaxis]]))
    print "%d points inside %d vertex poly..." % (grid.size/2,len(verts)),
    sys.stdout.flush()
    inside = pc.inside(grid)
    print "done."
    pl.plot(grid[:,0][inside], grid[:,1][inside], 'g+')
    pl.plot(grid[:,0][~inside], grid[:,1][~inside], 'r.')
    pl.plot(pc.verts[:,0], pc.verts[:,1], '-k')
    xc, yc = pc.centroid
    print xc, yc
    pl.plot([xc], [yc], 'co')
    pl.show()
    
