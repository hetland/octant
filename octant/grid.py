# encoding: utf-8
'''Tools for creating and working with Arikawa C-Grids'''
__docformat__ = "restructuredtext en"

from copy import deepcopy
import cPickle
from warnings import warn
import ctypes
import os
import sys

import numpy as np
import pylab as pl

from scipy.special import erf

from matplotlib.artist import Artist
from matplotlib.patches import Polygon, CirclePolygon
from matplotlib.lines import Line2D
from matplotlib.numerix.mlab import amin
from matplotlib.mlab import dist_point_to_segment

from octant.extern import PolygonGeometry
from octant.extern import GreatCircle

class BoundaryInteractor(object):
    """
    Interactive grid creation
        
    bry = BoundaryClick(x=[], y=[], beta=None, ax=gca(), **gridgen_options)
    
    The initial boundary polygon points (x and y) are
    counterclockwise, starting in the upper left corner of the
    boundary. 
    
    Key commands:
        
        t : toggle visibility of verticies
        d : delete a vertex
        i : insert a vertex at a point on the polygon line
        
        p : set vertex as beta=1 (a Positive turn, marked with green triangle)
        m : set vertex as beta=1 (a Negative turn, marked with red triangle)
        z : set vertex as beta=0 (no corner, marked with a black dot)
        
        G : generate grid from the current boundary using gridgen
        T : toggle visability of the current grid
    
    Methods:
    
        bry.dump(bry_file)
            Write the current boundary informtion (bry.x, bry.y, bry.beta) to
            a cPickle file bry_file.
        
        bry.load(bry_file)
            Read in boundary informtion (x, y, beta) from the cPickle file
            bry_file.
        
        bry.remove_grid()  
            Remove gridlines from axes.
    
    Attributes:
        bry.x : the X boundary points
        bry.y : the Y boundary points
        bry.verts : the verticies of the grid
        bry.grd : the CGrid object
        
    """
    
    _showverts = True
    _showbetas = True
    _showgrid = True
    _epsilon = 5  # max pixel distance to count as a vertex hit
    
    def _update_beta_lines(self):
        """Update m/pline by finding the points where self.beta== -/+ 1"""
        x, y = zip(*self._poly.xy)
        num_points = len(x)-1  # the first and last point are repeated
        
        xp = [x[n] for n in range(num_points) if self.beta[n]==1]
        yp = [y[n] for n in range(num_points) if self.beta[n]==1]
        self._pline.set_data(xp, yp)
        
        xm = [x[n] for n in range(num_points) if self.beta[n]==-1]
        ym = [y[n] for n in range(num_points) if self.beta[n]==-1]
        self._mline.set_data(xm, ym)
        
        xz = [x[n] for n in range(num_points) if self.beta[n]==0]
        yz = [y[n] for n in range(num_points) if self.beta[n]==0]
        self._zline.set_data(xz, yz)
        
        if len(x)-1 < self.gridgen_options['ul_idx']:
            self.gridgen_options['ul_idx'] = len(x)-1
        xs = x[self.gridgen_options['ul_idx']]
        ys = y[self.gridgen_options['ul_idx']]
        self._sline.set_data(xs, ys)
    
    def remove_grid(self):
        """Remove a generated grid from the BoundaryClick figure"""
        if hasattr(self, '_gridlines'):
            for line in self._gridlines:
                self._ax.lines.remove(line)
            delattr(self, '_gridlines')
    
    def _draw_callback(self, event):
        self._background = self._canvas.copy_from_bbox(self._ax.bbox)
        self._ax.draw_artist(self._poly)
        self._ax.draw_artist(self._pline)
        self._ax.draw_artist(self._mline)
        self._ax.draw_artist(self._zline)
        self._ax.draw_artist(self._sline)
        self._ax.draw_artist(self._line)
        self._canvas.blit(self._ax.bbox)
    
    def _poly_changed(self, poly):
        'this method is called whenever the polygon object is called'
        # only copy the artist props to the line (except visibility)
        vis = self._line.get_visible()
        Artist.update_from(self._line, poly)
        self._line.set_visible(vis)  # don't use the poly visibility state
    
    def _get_ind_under_point(self, event):
        'get the index of the vertex under point if within epsilon tolerance'
        try:
            x, y = zip(*self._poly.xy)
            
            # display coords
            xt, yt = self._poly.get_transform().numerix_x_y(x, y)
            d = np.sqrt((xt-event.x)**2 + (yt-event.y)**2)
            indseq = np.nonzero(np.equal(d, np.amin(d)))
            ind = indseq[0]
        
            if d[ind]>=self._epsilon:
                ind = None
        
            return ind
        except:
            # display coords
            xy = np.asarray(self._poly.xy)
            xyt = self._poly.get_transform().transform(xy)
            xt, yt = xyt[:, 0], xyt[:, 1]
            d = np.sqrt((xt-event.x)**2 + (yt-event.y)**2)
            indseq = np.nonzero(np.equal(d, np.amin(d)))[0]
            ind = indseq[0]
            
            if d[ind]>=self._epsilon:
                ind = None
            
            return ind
    
    def _button_press_callback(self, event):
        'whenever a mouse button is pressed'
        # if not self._showverts: return
        if event.inaxes==None: return
        if event.button != 1: return
        self._ind = self._get_ind_under_point(event)
    
    def _button_release_callback(self, event):
        'whenever a mouse button is released'
        # if not self._showverts: return
        if event.button != 1: return
        self._ind = None
    
    def _key_press_callback(self, event):
        'whenever a key is pressed'
        if not event.inaxes: return
        if event.key=='shift': return
        
        if event.key=='t':
            self._showbetas = not self._showbetas
            self._line.set_visible(self._showbetas)
            self._pline.set_visible(self._showbetas)
            self._mline.set_visible(self._showbetas)
            self._zline.set_visible(self._showbetas)
            self._sline.set_visible(self._showbetas)
        elif event.key=='d':
            ind = self._get_ind_under_point(event)
            if ind is not None:
                self._poly.xy = [tup for i,tup in enumerate(self._poly.xy) \
                                 if i!=ind]
                self._line.set_data(zip(*self._poly.xy))
                self.beta = [beta for i,beta in enumerate(self.beta) \
                             if i!=ind]
        elif event.key=='p':
            ind = self._get_ind_under_point(event)
            if ind is not None:
                self.beta[ind] = 1.0
        elif event.key=='m':
            ind = self._get_ind_under_point(event)
            if ind is not None:
                self.beta[ind] = -1.0
        elif event.key=='z':
            ind = self._get_ind_under_point(event)
            if ind is not None:
                self.beta[ind] = 0.0
        elif event.key=='s':
            ind = self._get_ind_under_point(event)
            if ind is not None:
                self.gridgen_options['ul_idx'] = ind
        elif event.key=='i':
            xys = self._poly.get_transform().transform(self._poly.xy)
            p = event.x, event.y # display coords
            for i in range(len(xys)-1):
                s0 = xys[i]
                s1 = xys[i+1]
                d = dist_point_to_segment(p, s0, s1)
                if d<=self._epsilon:
                    self._poly.xy = np.array(
                        list(self._poly.xy[:i+1]) +
                        [(event.xdata, event.ydata)] +
                        list(self._poly.xy[i+1:]))
                    self._line.set_data(zip(*self._poly.xy))
                    self.beta.insert(i+1, 0)
                    break
            s0 = xys[-1]
            s1 = xys[0]
            d = dist_point_to_segment(p, s0, s1)
            if d<=self._epsilon:
                self._poly.xy = np.array(
                    list(self._poly.xy) +
                    [(event.xdata, event.ydata)])
                self._line.set_data(zip(*self._poly.xy))
                self.beta.append(0)
        elif event.key=='G' or event.key == '1':
            options = deepcopy(self.gridgen_options)
            shp = options.pop('shp')
            if self.proj is None:
                x = self.x
                y = self.y
                self.grd = Gridgen(x, y, self.beta, shp,
                                   proj=self.proj, **options)
            else:
                lon, lat = self.proj(self.x, self.y, inverse=True)
                self.grd = Gridgen(lon, lat, self.beta, shp, 
                                   proj=self.proj, **options)
            self.remove_grid()
            self._showgrid = True
            gridlineprops = {'linestyle':'-', 'color':'k', 'lw':0.2}
            self._gridlines = []
            for line in self._ax._get_lines(*(self.grd.x, self.grd.y),
                                            **gridlineprops):
                self._ax.add_line(line)
                self._gridlines.append(line)
            for line in self._ax._get_lines(*(self.grd.x.T, self.grd.y.T),
                                            **gridlineprops):
                self._ax.add_line(line)
                self._gridlines.append(line)
        elif event.key=='T' or event.key == '2':
            self._showgrid = not self._showgrid
            if hasattr(self, '_gridlines'):
                for line in self._gridlines:
                    line.set_visible(self._showgrid)
        
        self._update_beta_lines()
        self._draw_callback(event)
        self._canvas.draw()
    
    def _motion_notify_callback(self, event):
        'on mouse movement'
        # if not self._showverts: return
        if self._ind is None: return
        if event.inaxes is None: return
        if event.button != 1: return
        x,y = event.xdata, event.ydata
        self._poly.xy[self._ind] = x,y
        
        x, y = zip(*self._poly.xy)
        self._line.set_data(x[:-1], y[:-1])
        self._update_beta_lines()
        
        self._canvas.restore_region(self._background)
        self._ax.draw_artist(self._poly)
        self._ax.draw_artist(self._pline)
        self._ax.draw_artist(self._mline)
        self._ax.draw_artist(self._zline)
        self._ax.draw_artist(self._sline)
        self._ax.draw_artist(self._line)
        self._canvas.blit(self._ax.bbox)
    
    
    def __init__(self, x, y=None, beta=None, ax=None, proj=None, **gridgen_options):
        
        if isinstance(x, str):
            bry_dict = np.load(x)
            x = bry_dict['x']
            y = bry_dict['y']
            beta = bry_dict['beta']
        
        assert len(x) >= 4, 'Boundary must have at least four points.'
        
        if ax is None: 
            ax = pl.gca()
        
        self._ax = ax
        
        self.proj = proj
        
        # Set default gridgen option, and copy over specified options.
        self.gridgen_options = {'ul_idx': 0, 'shp': (32, 32)}
        
        for key, value in gridgen_options.iteritems():
            self.gridgen_options[key] = gridgen_options[key]
        
        x = list(x); y = list(y)
        assert len(x)==len(y), 'arrays must be equal length'
        
        if beta is None:
            self.beta = [0 for xi in x]
        else:
            assert len(x)==len(beta), 'beta must have same length as x and y'
            self.beta = list(beta)
        
        self._line = Line2D(x, y, animated=True, 
                            ls='-', color='k', alpha=0.5, lw=1)
        self._ax.add_line(self._line)
        
        self._canvas = self._line.figure.canvas        
        
        self._poly = Polygon(self.verts, alpha=0.1, fc='k', animated=True)
        self._ax.add_patch(self._poly)
        
        # Link in the lines that will show the beta values
        # pline for positive turns, mline for negative (minus) turns
        # otherwize zline (zero) for straight sections
        self._pline = Line2D([], [], marker='^', ms=12, mfc='g',\
                             animated=True, lw=0)
        self._mline = Line2D([], [], marker='v', ms=12, mfc='r',\
                             animated=True, lw=0)
        self._zline = Line2D([], [], marker='o', mfc='k', animated=True, lw=0)
        self._sline = Line2D([], [], marker='s', mfc='k', animated=True, lw=0)
        
        self._update_beta_lines()
        self._ax.add_artist(self._pline)
        self._ax.add_artist(self._mline)
        self._ax.add_artist(self._zline)
        self._ax.add_artist(self._sline)
        
        # get the canvas and connect the callback events
        cid = self._poly.add_callback(self._poly_changed)
        self._ind = None # the active vert
        
        self._canvas.mpl_connect('draw_event', self._draw_callback)
        self._canvas.mpl_connect('button_press_event',\
                                 self._button_press_callback)
        self._canvas.mpl_connect('key_press_event', self._key_press_callback)
        self._canvas.mpl_connect('button_release_event',\
                                 self._button_release_callback)
        self._canvas.mpl_connect('motion_notify_event',\
                                 self._motion_notify_callback)
    
    
    def save_bry(self, bry_file='bry.pickle'):
        f = open(bry_file, 'wb')
        bry_dict = {'x': self.x, 'y': self.y, 'beta': self.beta}
        cPickle.dump(bry_dict, f, protocol=-1)
        f.close()
    
    def load_bry(self, bry_file='bry.pickle'):
        bry_dict = np.load(bry_file)
        x = bry_dict['x']
        y = bry_dict['y']
        self._line.set_data(x, y)
        self.beta = bry_dict['beta']
        if hasattr(self, '_poly'):
            self._poly.xy = zip(x, y)
            self._update_beta_lines()
            self._draw_callback(None)
            self._canvas.draw()
    
    def save_grid(self, grid_file='grid.pickle'):
        f = open(grid_file, 'wb')
        cPickle.dump(self.grd, f, protocol=-1)
        f.close()
    
    def _get_verts(self): return zip(self.x, self.y)
    verts = property(_get_verts)    
    def get_xdata(self): return self._line.get_xdata()
    x = property(get_xdata)
    def get_ydata(self): return self._line.get_ydata()
    y = property(get_ydata)
    


class FocusPoint(object):
    """A class for creating focus elements for use with gridgen
    
    Return a transformed, uniform grid, focused around point xo, yo, with a
    focusing factor of focus, and x and y extent given by Rx and Ry. The
    region of focusing will be approximately Gausian, and the resolution will
    be increased by approximately the value of factor. To achive focusing on a
    line in the x- or y-direction, use a large value for R in the desired
    direction; typically a value of 10.0 is good enough to have focusing only
    in one direction.
    
    """
    
    def __init__(self, xo, yo, factor=2.0, Rx=0.1, Ry=None):
        
        if Ry is None: Ry = Rx
        
        self.xo = xo
        self.yo = yo
        self.factor = factor
        self.Rx = Rx
        self.Ry = Ry
    
    def __call__(self, x, y):
        
        x = np.asarray(x)
        y = np.asarray(y)
        assert not np.any(x>1.0) or not np.any(x<0.0)  \
            or not np.any(y>1.0) or not np.any(x<0.0), \
                'x and y must both be within the range [0, 1].'
        
        alpha = 1.0 - 1.0/self.factor
        def xf(x, y):
            return x - 0.5*np.sqrt(np.pi)*self.Rx*alpha \
                          *np.exp(-(y-self.yo)**2/self.Ry**2) \
                          *erf((x-self.xo)/self.Rx)
        
        def yf(x, y):
            return y - 0.5*np.sqrt(np.pi)*self.Ry*alpha \
                          *np.exp(-(x-self.xo)**2/self.Rx**2) \
                          *erf((y-self.yo)/self.Ry)
        
        xf0 = xf(0.0, y); xf1 = xf(1.0, y)
        yf0 = yf(x, 0.0); yf1 = yf(x, 1.0)
        
        return (xf(x, y)-xf0)/(xf1-xf0), (yf(x, y)-yf0)/(yf1-yf0)


class Focus(object):
    """
    foc = Focus(xo, yo, factor=2.0, Rx=0.1, Ry=Rx)
    
    Return a transformed, uniform grid, focused around point xo, yo, with a focusing
    factor of focus, and x and y extent given by Rx and Ry.  The region of focusing
    will be approximately Gausian, and the resolution will be increased by approximately
    the value of factor.  To achive focusing on a line in the x- or y-direction, use a
    large value for R in the desired direction; typically a value of 10.0 is good enough
    to have focusing only in one direction.
    
    Calls to the object return transformed coordinates:
        xf, yf = foc(x, y)
    where x and y must be within [0, 1], and are typically a uniform, normalized grid.
    
    Additional focus points may be added with the add_focus_point method:
        foc.add_focus_point(xo, yo, factor=2.0, Rx=0.1, Ry=Rx)
    subsequent calls to foc will result in a transformed grid with all the focus points
    applied in sequence.
    
    EXAMPLE:
    
    foc = Focus(0.7, 0.0, factor=2.0, Rx=0.2, Ry=10)
    foc.add_focus_point(0.2, 0.7, factor=3.0, Rx=0.2)
    
    y, x = mgrid[0:1:50j, 0:1:70j]
    xf, yf = foc(x, y)
    
    """
    def __init__(self, xo, yo, factor=2.0, Rx=0.1, Ry=None):
        self._focuspoints = []
        self.add_focus_point(xo, yo, factor, Rx, Ry)
    
    def add_focus_point(self, xo, yo, factor=2.0, Rx=0.1, Ry=None):
        """docstring for add_point"""
        self._focuspoints.append(FocusPoint(xo, yo, factor, Rx, Ry))
    
    def __call__(self, x, y):
        """docstring for __call__"""
        for focuspoint in self._focuspoints:
            x, y = focuspoint(x, y)
        return x, y


class CGrid(object):
    """A class for a curvilinear Arikawa C-Grid.
        
       The basis for the CGrid class are two arrays defining the verticies of
       the grid in either Cartesian or geographic coordinates and an optional
       mask defined on the cell centers. Other grid properties, such as the
       locations of the cell centers (rho-points), cell edges (u- and
       v-points), cell widths (dx and dy) and other metrics (angle, dmde, and
       dndx) are all calculated internally from the vertex points. All
       calculations are done at the time the attribute is requested, so
       changes to the verticies (or mask) are instantly recognized by the
       derived grid properties.
       
        For a geographic grid, a projection may be specified, or The default
       projection for will be defined by the matplotlib.toolkits.Basemap
       projection:
       
        proj = Basemap(projection='merc', resolution=None, lat_ts=0.0)
       
        For a geographic grid, the cell widths are determined by the great
       circle distances. Angles, however, are defined using the projected
       coordinates, so a projection that conserves angles must be used. This
       means typically either Mercator (projection='merc') or Lambert
       Conformal Conic (projection='lcc').
       
        For a grid in Cartesian coordinates:
       
        grd = CGrid(x, y, mask=None, f=None, h=None)
       
        For a grid in geographic coordinates:
       
        grd = CGrid(lon, lat, proj=<Basemap Mercator projection>, 
                    mask=None, f=None, h=None)
       
        Input vertex arrays may be either numpy arrays or MaskedArrays. If
       masked arrays are used, the mask will be a combination of the specified
       mask (if given) and the masked locations.
        
    """
    
    def __init__(self, x, y, proj=None, mask=None, f=None, h=None):
                
        # self.proj is used to determine if the grid is geographic.
        # self.proj is None for Cartesian grids
        # proj is a Basemap instance otherwise.
        
        self.proj = proj
        
        assert np.ndim(x)==2 and np.ndim(y)==2 and np.shape(x)==np.shape(y), \
            'x and y must be 2D arrays of the same size.'
        
        if np.any(np.isnan(x)) or np.any(np.isnan(y)):
            x = np.ma.masked_where(isnan(x), x)
            y = np.ma.masked_where(isnan(y), y)
            
        if self.proj is not None:
            self.lon_vert = x
            self.lat_vert = y
            self.x_vert, self.y_vert = self.proj(x, y)
        else:
            self.x_vert = x
            self.y_vert = y
            self.lon_vert = None
            self.lat_vert = None
        
        # Generate the grid mask
        if mask is None:
            mask_shape = tuple([n-1 for n in self.x_vert.shape])
            self.mask_rho = np.ones(mask_shape, dtype='d')
        else:
            self.mask_rho = mask
        
        # If maskedarray is given for verticies, modify the mask such that 
        # non-existant grid points are masked.  A cell requires all four
        # verticies to be defined as a water point.
        if isinstance(self.x_vert, np.ma.MaskedArray):
            mask = (self.x_vert.mask[:-1,:-1] | self.x_vert.mask[1:,:-1] | \
                    self.x_vert.mask[:-1,1:] | self.x_vert.mask[1:,1:])
            self.mask_rho = np.asarray(~(~np.bool_(self.mask_rho) | mask), dtype='d')
        
        if isinstance(self.y_vert, np.ma.MaskedArray):
            mask = (self.y_vert.mask[:-1,:-1] | self.y_vert.mask[1:,:-1] | \
                    self.y_vert.mask[:-1,1:] | self.y_vert.mask[1:,1:])
            self.mask_rho = np.asarray(~(~np.bool_(self.mask_rho) | mask), dtype='d')
        
        if isinstance(self.lon_vert, np.ma.MaskedArray):
            mask = (self.lon_vert.mask[:-1,:-1] | self.lon_vert.mask[1:,:-1] | \
                    self.lon_vert.mask[:-1,1:] | self.lon_vert.mask[1:,1:])
            self.mask_rho = np.asarray(~(~np.bool_(self.mask_rho) | mask), dtype='d')
        
        if isinstance(self.lat_vert, np.ma.MaskedArray):
            mask = (self.lat_vert.mask[:-1,:-1] | self.lat_vert.mask[1:,:-1] | \
                    self.lat_vert.mask[:-1,1:] | self.lat_vert.mask[1:,1:])
            self.mask_rho = np.asarray(~(~np.bool_(self.mask_rho) | mask), dtype='d')
        
        self._calculate_subgrids()
        self._calculate_metrics()        
        if self.proj is not None and f is None:
            self.f = 2 * 7.29e-5 * np.cos(self.lat_rho * np.pi / 180.)
        else:
            self.f = np.asarray(f, dtype='d')
            
        self.h = h
        
    def _calculate_subgrids(self):
        self.x_rho = 0.25*(self.x_vert[1:,1:]+self.x_vert[1:,:-1]+ \
                           self.x_vert[:-1,1:]+self.x_vert[:-1,:-1])
        self.y_rho = 0.25*(self.y_vert[1:,1:]+self.y_vert[1:,:-1]+ \
                           self.y_vert[:-1,1:]+self.y_vert[:-1,:-1])
        self.x_u = 0.5*(self.x_vert[:-1,1:-1] + self.x_vert[1:,1:-1])
        self.y_u = 0.5*(self.y_vert[:-1,1:-1] + self.y_vert[1:,1:-1])
        self.x_v = 0.5*(self.x_vert[1:-1,:-1] + self.x_vert[1:-1,1:])
        self.y_v = 0.5*(self.y_vert[1:-1,:-1] + self.y_vert[1:-1,1:])
        self.x_psi = self.x_vert[1:-1,1:-1]
        self.y_psi = self.y_vert[1:-1,1:-1]
        
        if self.proj is not None:
            self.lon_rho, self.lat_rho = self.proj(self.x_rho, self.y_rho, inverse=True)
            self.lon_u, self.lat_u = self.proj(self.x_u, self.y_u, inverse=True)
            self.lon_v, self.lat_v = self.proj(self.x_v, self.y_v, inverse=True)
            self.lon_psi, self.lat_psi = self.proj(self.x_psi, self.y_psi, inverse=True)
    
    def _calculate_metrics(self):
        'Calculates pm, pn, dndx, dmde, and angle from x_vert and y_vert'
        if self.proj is not None:
            gc_dist = np.vectorize(lambda lon1, lat1, lon2, lat2: \
                         GreatCircle(6378137.0, 6356752.3142, \
                                          lon1, lat1, lon2, lat2).distance)
            dx = gc_dist(self.lon[:,1:],  self.lat[:,1:], \
                         self.lon[:,:-1], self.lat[:,:-1])
            self.dx = 0.5*(dx[1:,:]+dx[:-1,:])
            self.pm = 1.0/self.dx
            dy = gc_dist(self.lon[1:,:],  self.lat[1:,:], \
                         self.lon[:-1,:], self.lat[:-1,:])
            self.dy = 0.5*(dy[:,1:]+dy[:,:-1])
            self.pn = 1.0/self.dy
        else:
            x_temp = 0.5*(self.x_vert[1:,:]+self.x_vert[:-1,:])
            y_temp = 0.5*(self.y_vert[1:,:]+self.y_vert[:-1,:])
            self.dx = np.sqrt(np.diff(x_temp, axis=1)**2 + np.diff(y_temp, axis=1)**2)
            x_temp = 0.5*(self.x_vert[:,1:]+self.x_vert[:,:-1])
            y_temp = 0.5*(self.y_vert[:,1:]+self.y_vert[:,:-1])
            self.dy = np.sqrt(np.diff(x_temp, axis=0)**2 + np.diff(y_temp, axis=0)**2)
        
        if isinstance(self.dy, np.ma.MaskedArray):
            self.dndx = np.ma.zeros(self.x_rho.shape, dtype='d')
        else:
            self.dndx = np.zeros(self.x_rho.shape, dtype='d')
        
        if isinstance(self.dx, np.ma.MaskedArray):
            self.dmde = np.ma.zeros(self.x_rho.shape, dtype='d')
        else:
            self.dmde = np.zeros(self.x_rho.shape, dtype='d')
        
        self.dndx[1:-1,1:-1] = 0.5*(self.dy[1:-1,2:] - self.dy[1:-1,:-2])
        self.dmde[1:-1,1:-1] = 0.5*(self.dx[2:,1:-1] - self.dx[:-2,1:-1])
        
        if isinstance(self.x_vert, np.ma.MaskedArray) or \
           isinstance(self.y_vert, np.ma.MaskedArray):
            self.angle = np.ma.zeros(self.x_vert.shape, dtype='d')
        else:
            self.angle = np.zeros(self.x_vert.shape, dtype='d')
        
        angle_ud = np.arctan2(np.diff(self.y_vert, axis=1), np.diff(self.x_vert, axis=1))
        angle_lr = np.arctan2(np.diff(self.y_vert, axis=0), np.diff(self.x_vert, axis=0)) - np.pi/2.0        
        # domain center
        self.angle[1:-1,1:-1] = 0.25*(angle_ud[1:-1,1:]+angle_ud[1:-1,:-1]\
                                     +angle_lr[1:,1:-1]+angle_lr[:-1,1:-1])
        # edges
        self.angle[0,1:-1] = (1.0/3.0)*(angle_lr[0,1:-1]+angle_ud[0,1:]+angle_ud[0,:-1])
        self.angle[-1,1:-1] = (1.0/3.0)*(angle_lr[-1,1:-1]+angle_ud[-1,1:]+angle_ud[-1,:-1])
        self.angle[1:-1,0] = (1.0/3.0)*(angle_ud[1:-1,0]+angle_lr[1:,0]+angle_lr[:-1,0])
        self.angle[1:-1,-1] = (1.0/3.0)*(angle_ud[1:-1,-1]+angle_lr[1:,-1]+angle_lr[:-1,-1])
        #conrers
        self.angle[0,0] = 0.5*(angle_lr[0,0]+angle_ud[0,0])
        self.angle[0,-1] = 0.5*(angle_lr[0,-1]+angle_ud[0,-1])
        self.angle[-1,0] = 0.5*(angle_lr[-1,0]+angle_ud[-1,0])
        self.angle[-1,-1] = 0.5*(angle_lr[-1,-1]+angle_ud[-1,-1])
        
        self.angle_rho = np.arctan2(np.diff(0.5*(self.y_vert[1:,:]+self.y_vert[:-1,:])), \
                                    np.diff(0.5*(self.x_vert[1:,:]+self.x_vert[:-1,:])))        
    
    def calculate_orthogonality(self):
        '''
        Calculate orthogonality error in radians
        '''
        z = self.x_vert + 1j*self.y_vert
        du = np.diff(z, axis=1); du = (du/abs(du))[:-1,:]
        dv = np.diff(z, axis=0); dv = (dv/abs(dv))[:,:-1]
        ang1 = np.arccos(du.real*dv.real + du.imag*dv.imag)
        du = np.diff(z, axis=1); du = (du/abs(du))[1:,:]
        dv = np.diff(z, axis=0); dv = (dv/abs(dv))[:,:-1]
        ang2 = np.arccos(du.real*dv.real + du.imag*dv.imag)
        du = np.diff(z, axis=1); du = (du/abs(du))[:-1,:]
        dv = np.diff(z, axis=0); dv = (dv/abs(dv))[:,1:]
        ang3 = np.arccos(du.real*dv.real + du.imag*dv.imag)
        du = np.diff(z, axis=1); du = (du/abs(du))[1:,:]
        dv = np.diff(z, axis=0); dv = (dv/abs(dv))[:,1:]
        ang4 = np.arccos(du.real*dv.real + du.imag*dv.imag)
        ang = np.mean([abs(ang1), abs(ang2), abs(ang3), abs(ang4)], axis=0)
        ang = (ang-np.pi/2.0)
        return ang
    
    def mask_polygon(self, polyverts, mask_value=0.0):
        """
        Mask Cartesian points contained within the polygon defined by polyverts
        
        A cell is masked if the cell center (x_rho, y_rho) is within the
        polygon. Other sub-masks (mask_u, mask_v, and mask_psi) are updated
        automatically.
        
        mask_value [=0.0] may be specified to alter the value of the mask set
        within the polygon.  E.g., mask_value=1 for water points.
        """
        mask = self.mask_rho
        inside = PolygonGeometry(polyverts).inside(zip(self.x_rho.flat, self.y_rho.flat))        
        if np.any(inside):
            self.mask_rho.flat[inside] = mask_value
    
    def _get_mask_u(self):
        return self.mask_rho[:,1:]*self.mask_rho[:,:-1]
    
    def _get_mask_v(self):
        return self.mask_rho[1:,:]*self.mask_rho[:-1,:]
    
    def _get_mask_psi(self):
        return self.mask_rho[1:,1:]*self.mask_rho[:-1,1:]* \
               self.mask_rho[1:,:-1]*self.mask_rho[:-1,:-1]
    
    x = property(lambda self: self.x_vert, None, None, 'Shorthand for x_vert')
    y = property(lambda self: self.y_vert, None, None, 'Shorthand for x_vert')
    lon = property(lambda self: self.lon_vert, None, None, 'Shorthand for lon_vert')
    lat = property(lambda self: self.lat_vert, None, None, 'Shorthand for lat_vert')
    mask = property(lambda self: self.mask_rho, None, None, 'Shorthand for mask_vert')
    mask_u   = property(_get_mask_u)
    mask_v   = property(_get_mask_v)
    mask_psi = property(_get_mask_psi)



class Gridgen(CGrid):
    """docstring for Gridgen"""
    
    # for directory in sys.path:
    #     if directory.endswith('site-packages'):
    #         print os.path.join(directory, '_gridgen.so')
    #         try:
    #             _libgridgen = ctypes.pydll.LoadLibrary(os.path.join(directory, '_gridgen.so'))
    #             break
    #         except:
    #             pass
    
    _libgridgen = np.ctypeslib.load_library('libgridgen',__file__)
    
    _libgridgen.gridgen_generategrid2.restype = ctypes.c_void_p
    _libgridgen.gridnodes_getx.restype = ctypes.POINTER(ctypes.POINTER(ctypes.c_double))
    _libgridgen.gridnodes_gety.restype = ctypes.POINTER(ctypes.POINTER(ctypes.c_double))
    _libgridgen.gridnodes_getnce1.restype = ctypes.c_int
    _libgridgen.gridnodes_getnce2.restype = ctypes.c_int
    _libgridgen.gridmap_build.restype = ctypes.c_void_p
    
    def generate_grid(self):
        
        if self._gn is not None:
            self._libgridgen.gridnodes_destroy(self._gn)
        
        nbry = len(self.xbry)
        
        nsigmas = ctypes.c_int(0)
        sigmas = ctypes.c_void_p(0)
        nrect = ctypes.c_int(0)
        xrect =  ctypes.c_void_p(0)
        yrect = ctypes.c_void_p(0)
        
        if self.focus is None:
            ngrid = ctypes.c_int(0)
            xgrid = ctypes.POINTER(ctypes.c_double)()
            ygrid = ctypes.POINTER(ctypes.c_double)()
        else:
            y, x =  np.mgrid[0:1:self.ny*1j, 0:1:self.nx*1j]
            xgrid, ygrid = self.focus(x, y)
            ngrid = ctypes.c_int(xgrid.size)
            xgrid = (ctypes.c_double * xgrid.size)(*xgrid.flatten())
            ygrid = (ctypes.c_double * ygrid.size)(*ygrid.flatten())
        
        self._gn = self._libgridgen.gridgen_generategrid2(
             ctypes.c_int(nbry), 
             (ctypes.c_double * nbry)(*self.xbry), 
             (ctypes.c_double * nbry)(*self.ybry), 
             (ctypes.c_double * nbry)(*self.beta),
             ctypes.c_int(self.ul_idx), 
             ctypes.c_int(self.nx), 
             ctypes.c_int(self.ny), 
             ngrid, 
             xgrid, 
             ygrid,
             ctypes.c_int(self.nnodes), 
             ctypes.c_int(self.newton), 
             ctypes.c_double(self.precision),
             ctypes.c_int(self.checksimplepoly), 
             ctypes.c_int(self.thin), 
             ctypes.c_int(self.nppe),
             ctypes.c_int(self.verbose),
             ctypes.byref(nsigmas), 
             ctypes.byref(sigmas), 
             ctypes.byref(nrect),
             ctypes.byref(xrect), 
             ctypes.byref(yrect) )
        
        x = self._libgridgen.gridnodes_getx(self._gn)
        x = np.asarray([x[0][i] for i in range(self.ny*self.nx)])
        # x = np.asarray([x[j][i] for j in range(self.ny) for i in range(self.nx)])
        x.shape = (self.ny, self.nx)
        
        y = self._libgridgen.gridnodes_gety(self._gn)    
        y = np.asarray([y[0][i] for i in range(self.ny*self.nx)])            
        # y = np.asarray([y[j][i] for j in range(self.ny) for i in range(self.nx)])
        y.shape = (self.ny, self.nx)
        
        if np.any(np.isnan(x)) or np.any(np.isnan(y)):
            x = np.ma.masked_where(np.isnan(x), x)
            y = np.ma.masked_where(np.isnan(y), y)
        
        if self.proj is not None:
            lon, lat = self.proj(x, y, inverse=True)
            super(Gridgen, self).__init__(lon, lat, proj=self.proj)
        else:
            super(Gridgen, self).__init__(x, y)
        
    
    def __init__(self, xbry, ybry, beta, shape, ul_idx=0, \
                 focus=None, proj=None, \
                 nnodes=14, precision=1.0e-12, nppe=3, \
                 newton=True, thin=True, checksimplepoly=True, verbose=False):
        
        self.xbry = np.asarray(xbry, dtype='d')
        self.ybry = np.asarray(ybry, dtype='d')
        self.beta = np.asarray(beta, dtype='d')
        assert self.beta.sum() == 4.0, 'sum of beta must be 4.0'
        self.shape = shape
        self.ny = shape[0]
        self.nx = shape[1]
        self.ul_idx = ul_idx
        self.focus = focus
        self.nnodes = nnodes
        self.precision = precision
        self.nppe = nppe
        self.newton = newton
        self.thin = thin
        self.checksimplepoly = checksimplepoly
        self.verbose = verbose
        
        self.proj = proj
        if self.proj is not None:
            self.xbry, self.ybry = proj(self.xbry, self.ybry)
        
        self._gn = None
        self.generate_grid()
    
    def __del__(self):
        """delete gridnode object upon deletion"""
        self._libgridgen.gridnodes_destroy(self._gn)


def rho_to_vert(xr, yr, pm, pn, ang):
    Mp, Lp = xr.shape
    x = empty((Mp+1, Lp+1), dtype='d')
    y = empty((Mp+1, Lp+1), dtype='d')
    x[1:-1, 1:-1] = 0.25*(xr[1:,1:]+xr[1:,:-1]+xr[:-1,1:]+xr[:-1,:-1])
    y[1:-1, 1:-1] = 0.25*(yr[1:,1:]+yr[1:,:-1]+yr[:-1,1:]+yr[:-1,:-1])
    
    # east side
    theta = 0.5*(ang[:-1,-1]+ang[1:,-1])
    dx = 0.5*(1.0/pm[:-1,-1]+1.0/pm[1:,-1])
    dy = 0.5*(1.0/pn[:-1,-1]+1.0/pn[1:,-1])
    x[1:-1,-1] = x[1:-1,-2] + dx*np.cos(theta)
    y[1:-1,-1] = y[1:-1,-2] + dx*np.sin(theta)
    
    # west side
    theta = 0.5*(ang[:-1,0]+ang[1:,0])
    dx = 0.5*(1.0/pm[:-1,0]+1.0/pm[1:,0])
    dy = 0.5*(1.0/pn[:-1,0]+1.0/pn[1:,0])
    x[1:-1,0] = x[1:-1,1] - dx*np.cos(theta)
    y[1:-1,0] = y[1:-1,1] - dx*np.sin(theta)
    
    # north side
    theta = 0.5*(ang[-1,:-1]+ang[-1,1:])
    dx = 0.5*(1.0/pm[-1,:-1]+1.0/pm[-1,1:])
    dy = 0.5*(1.0/pn[-1,:-1]+1.0/pn[-1,1:])
    x[-1,1:-1] = x[-2,1:-1] - dy*np.sin(theta)
    y[-1,1:-1] = y[-2,1:-1] + dy*np.cos(theta)
    
    # here we are now going to the south side..
    theta = 0.5*(ang[0,:-1]+ang[0,1:])
    dx = 0.5*(1.0/pm[0,:-1]+1.0/pm[0,1:])
    dy = 0.5*(1.0/pn[0,:-1]+1.0/pn[0,1:])
    x[0,1:-1] = x[1,1:-1] + dy*np.sin(theta)
    y[0,1:-1] = y[1,1:-1] - dy*np.cos(theta)
    
    #Corners
    x[0,0] = 4.0*xr[0,0]-x[1,0]-x[0,1]-x[1,1]
    x[-1,0] = 4.0*xr[-1,0]-x[-2,0]-x[-1,1]-x[-2,1]
    x[0,-1] = 4.0*xr[0,-1]-x[0,-2]-x[1,-1]-x[1,-2]
    x[-1,-1] = 4.0*xr[-1,-1]-x[-2,-2]-x[-2,-1]-x[-1,-2]
    
    y[0,0] = 4.0*yr[0,0]-y[1,0]-y[0,1]-y[1,1]
    y[-1,0] = 4.0*yr[-1,0]-y[-2,0]-y[-1,1]-y[-2,1]
    y[0,-1] = 4.0*yr[0,-1]-y[0,-2]-y[1,-1]-y[1,-2]
    y[-1,-1] = 4.0*yr[-1,-1]-y[-2,-2]-y[-2,-1]-y[-1,-2]
    
    return x, y


class edit_mask_mesh(object):
    
    def _on_key(self, event):
        if event.key == 'e':
            self._clicking = not self._clicking
            pl.title('Editing %s -- click "e" to toggle' % self._clicking)
            pl.draw()
    
    def _on_click(self, event):
        x, y = event.xdata, event.ydata
        if event.button==1 and event.inaxes is not None and self._clicking == True:
            d = (x-self._xc)**2 + (y-self._yc)**2
            if isinstance(self.xv, np.ma.MaskedArray):
                idx = np.argwhere(d[~self._xc.mask] == d.min())
            else:
                idx = np.argwhere(d.flatten() == d.min())
            self._mask[idx] = float(not self._mask[idx])
            i, j = np.argwhere(d == d.min())[0]
            self.mask[i, j] = float(not self.mask[i, j])
            self._pc.set_array(self._mask)
            self._pc.changed()
            pl.draw()
    
    def __init__(self, xv, yv, mask, **kwargs):
        assert xv.shape == yv.shape, 'xv and yv must have the same shape'
        for dx, dq in zip(xv.shape, mask.shape):
             assert dx==dq+1, \
             'xv and yv must be cell verticies (i.e., one cell bigger in each dimension)'
        
        self.xv = xv
        self.yv = yv
        
        self.mask = mask
        
        land_color = kwargs.pop('land_color', (0.6, 1.0, 0.6))
        sea_color = kwargs.pop('sea_color', (0.6, 0.6, 1.0))
        
        cm = pl.matplotlib.colors.ListedColormap([land_color, sea_color], 
                                                 name='land/sea')
        self._pc = pl.pcolor(xv, yv, mask, cmap=cm, vmin=0, vmax=1, **kwargs)
        self._xc = 0.25*(xv[1:,1:]+xv[1:,:-1]+xv[:-1,1:]+xv[:-1,:-1])
        self._yc = 0.25*(yv[1:,1:]+yv[1:,:-1]+yv[:-1,1:]+yv[:-1,:-1])
        
        if isinstance(self.xv, np.ma.MaskedArray):
            self._mask = mask[~self._xc.mask]
        else:
            self._mask = mask.flatten()
        
        pl.connect('button_press_event', self._on_click)
        pl.connect('key_press_event', self._on_key)
        self._clicking = False
        pl.title('Editing %s -- click "e" to toggle' % self._clicking)
        pl.draw()


if __name__ == '__main__':
    geographic = False
    if geographic:
        from mpl_toolkits.basemap import Basemap
        proj = Basemap(projection='lcc',
                       resolution='i',
                       llcrnrlon=-72.0,
                       llcrnrlat= 40.0,
                       urcrnrlon=-63.0,
                       urcrnrlat=47.0,
                       lat_0=43.0,
                       lon_0=-62.5)
        
        lon = (-71.977385177601761, -70.19173825913137,
               -63.045075098584945,-64.70104074097425)
        lat = (42.88215610827428, 41.056141745853786,
               44.456701607935841, 46.271758064353897)
        beta = [1.0, 1.0, 1.0, 1.0]

        grd = Gridgen(lon, lat, beta, (32, 32), proj=proj)
        
        for seg in proj.coastsegs:
            grd.mask_polygon(seg)
        
        pl.pcolor(grd.x, grd.y, grd.mask)
        pl.show()
    else:
        x = [0.2, 0.85, 0.9, 0.82, 0.23]
        y = [0.2, 0.25, 0.5, 0.82, .83]
        beta = [1.0, 1.0, 0.0, 1.0, 1.0]
        
        grd = Gridgen(x, y, beta, (32, 32))
        
        ax = pl.subplot(111)
        BoundaryInteractor(x, y, beta)
        pl.show()
