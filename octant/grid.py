'Interactive boundary generation for use with gridgen.'

# Created by Rob Hetland on 2007-01-21.
# Copyright (c) 2007 Texas A&M Univsersity. All rights reserved.

# Version 1.0.0 on 2007-11-25
#   Removed second BoundaryInteractor class, and added interative gridgen
#   capabilities.

from copy import deepcopy
import cPickle
from warnings import warn
from ctypes import *
import sys
import os

from octant.extern import PolygonGeometry
from scipy.special import erf

from numpy import *
import pylab as pl

from matplotlib.artist import Artist
from matplotlib.patches import Polygon, CirclePolygon
from matplotlib.lines import Line2D
from matplotlib.numerix.mlab import amin
from matplotlib.mlab import dist_point_to_segment

try:
    from matplotlib.toolkits.basemap import Basemap
except:
    warn("Can't import Basemap, so cannot use geographic grids.")

class BoundaryInteractor(object):
    """
    bry = BoundaryClick(x=[], y=[], beta=None, ax=gca(), **gridgen_options)
    
    If x, y and beta are not given, and interactive polygon creation session is
    started. The initial boundary is sketched out by clicking the points (in a
    counterclockwise manner, usually starting in the upper lefthand corner of the
    boundary). At this point the verticies are marked by orange circles.
    
    Switch to editing mode by hitting return. This changes the vertecies to black. At
    this point, beta values may be created to define the corners of the grid (see
    below). Current data are always available in bry.x, bry.y (combined in p.verts)
    and bry.beta attributes.
    
    Key commands:
        
        enter : switch to grid editing mode
        
        t : toggle visibility of verticies
        d : delete a vertex
        i : insert a vertex at a point on the polygon line
        
        p : define vertex as beta=1 (a Positive turn, marked with green triangle)
        m : define vertex as beta=1 (a Negative turn, marked with red triangle)
        z : define vertex as beta=0 (no corner, marked with a black dot)
        
        G : generate grid from the current boundary using gridgen
        T : toggle visability of the current grid
    
    Methods:
    
        bry.dump(bry_file)
            Write the current boundary informtion (bry.x, bry.y, bry.beta) to a cPickle
            file bry_file.
        
        bry.load(bry_file)
            Read in boundary informtion (x, y, beta) from the cPickle file bry_file.
        
        bry.remove_grid()  
            Remove gridlines from axes.
        
    """
    
    _showverts = True
    _showbetas = True
    _showgrid = True
    _epsilon = 5  # max pixel distance to count as a vertex hit
    
    def _update_beta_lines(self):
        """Update the m/pline by finding the (x,y) points where self.beta== -/+ 1"""
        x = self._line.get_xdata()
        y = self._line.get_ydata()
        
        xp = [x[n] for n in range(len(x)) if self.beta[n]==1]
        yp = [y[n] for n in range(len(y)) if self.beta[n]==1]
        self._pline.set_data(xp, yp)
        
        xm = [x[n] for n in range(len(x)) if self.beta[n]==-1]
        ym = [y[n] for n in range(len(y)) if self.beta[n]==-1]
        self._mline.set_data(xm, ym)
        
        xz = [x[n] for n in range(len(x)) if self.beta[n]==0]
        yz = [y[n] for n in range(len(y)) if self.beta[n]==0]
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
            d = sqrt((xt-event.x)**2 + (yt-event.y)**2)
            indseq = nonzero(equal(d, amin(d)))
            ind = indseq[0]
        
            if d[ind]>=self._epsilon:
                ind = None
        
            return ind
        except:
            # display coords
            xy = asarray(self._poly.xy)
            xyt = self._poly.get_transform().transform(xy)
            xt, yt = xyt[:, 0], xyt[:, 1]
            d = sqrt((xt-event.x)**2 + (yt-event.y)**2)
            indseq = nonzero(equal(d, amin(d)))[0]
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
                    self._poly.xy = array(
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
                self._poly.xy = array(
                    list(self._poly.xy) +
                    [(event.xdata, event.ydata)])
                self._line.set_data(zip(*self._poly.xy))
                self.beta.append(0)
        elif event.key=='G' or event.key == '1':
            options = deepcopy(self.gridgen_options)
            shp = options.pop('shp')
            self.grd = Gridgen(self.x, self.y, self.beta, shp,\
                                      **options)
            self.remove_grid()
            self._showgrid = True
            gridlineprops = {'linestyle':'-', 'color':'k', 'lw':0.2}
            self._gridlines = []
            for line in self._ax._get_lines(*(self.grd.x, self.grd.y),\
                                            **gridlineprops):
                self._ax.add_line(line)
                self._gridlines.append(line)
            for line in self._ax._get_lines(*(self.grd.x.T, self.grd.y.T),\
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
        self._line.set_data(x, y)
        self._update_beta_lines()
        
        self._canvas.restore_region(self._background)
        self._ax.draw_artist(self._poly)
        self._ax.draw_artist(self._pline)
        self._ax.draw_artist(self._mline)
        self._ax.draw_artist(self._zline)
        self._ax.draw_artist(self._sline)
        self._ax.draw_artist(self._line)
        self._canvas.blit(self._ax.bbox)
    
    
    def __init__(self, x, y, beta, ax=None, **gridgen_options):
        
        if isinstance(x, str):
            x, y, beta = load(x)
        
        assert len(x) >= 4, 'Boundary must have at least four points.'
        
        if ax is None: 
            ax = pl.gca()
        
        self._ax = ax
        
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
        
        self._line = Line2D(x, y, animated=True, ls='-', color='k', alpha=0.5, lw=1)
        self._ax.add_line(self._line)
        
        self._canvas = self._line.figure.canvas        
        
        self._poly = Polygon(self.verts, alpha=0.1, fc='k', animated=True)
        self._ax.add_patch(self._poly)
        
        # Link in the two lines that will show the beta values
        # pline for positive turns, mline for negative (minus) turns.
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
    
    
    def dump(self, bry_file):
        f = open(bry_file, 'wb')
        bry_dict = {'x': self.x, 'y': self.y, 'beta': self.beta}
        cPickle.dump(bry_dict, f, protocol=-1)
        f.close()
    
    def load(self, bry_file):
        bry_dict = load(bry_file)
        x = bry_dict['x']
        y = bry_dict['y']
        beta = bry_dict['beta']
        self._line.set_data(x, y)
        if hasattr(self, '_poly'):
            self._poly.xy = zip(x, y)
            self._update_beta_lines()
            self._draw_callback(None)
            self._canvas.draw()
    
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
        
        x = asarray(x)
        y = asarray(y)
        assert not any(x>1.0) or not any(x<0.0) or not any(y>1.0) or not any(x<0.0), \
                'x and y must both be within the range [0, 1].'
        
        alpha = 1.0 - 1.0/self.factor
        def xf(x, y):
            return x - 0.5*sqrt(pi)*self.Rx*alpha*exp(-(y-self.yo)**2/self.Ry**2)*erf((x-self.xo)/self.Rx)
        
        def yf(x, y):
            return y - 0.5*sqrt(pi)*self.Ry*alpha*exp(-(x-self.xo)**2/self.Rx**2)*erf((y-self.yo)/self.Ry)
        
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
       
        grd = CGrid(lon, lat, proj=<Basemap Mercator projection>, mask=None,
       f=None, h=None)
       
        Input vertex arrays may be either numpy arrays or MaskedArrays. If
       masked arrays are used, the mask will be a combination of the specified
       mask (if given) and the masked locations.
        
    """
    
    def __init__(self, x=None, y=None,  \
                       lon=None, lat=None, \
                       mask=None, proj=None, \
                       f=None, h=None):
        
        # check for neccessary inputs
        assert  (x is not None and y is not None) or \
                (lon is not None and lat is not None),  \
                'Must define either x/y or lat/lon grid verticies'
        
        self.x_vert = x
        self.y_vert = y
        self.lon_vert = lon
        self.lat_vert = lat
        
        # If lat and lon are input, the grid is geographic.
        self.geographic=False
        if  lon is not None and lat is not None:
            self.geographic=True
            if proj is None:    # Use Mercator projection if none given.
                self.proj = Basemap(projection='merc', resolution=None, lat_ts=0.0)
            else:
                self.proj = proj
        
        # Generate the grid mask
        if mask is not None:
            self.mask_rho = mask
        else:
            self.mask_rho = ones(self.x_rho.shape, dtype='d')
        
        # If maskedarray is given for verticies, modify the mask such that 
        # non-existant grid points are masked.  A cell requires all four
        # verticies to be defined as a water point.
        if isinstance(self.x_vert, ma.MaskedArray):
            mask = (self.x_vert.mask[:-1,:-1] | self.x_vert.mask[1:,:-1] | \
                    self.x_vert.mask[:-1,1:] | self.x_vert.mask[1:,1:])
            self.mask_rho = asarray(~(~bool_(self.mask_rho) | mask), dtype='d')
        
        if isinstance(self.y_vert, ma.MaskedArray):
            mask = (self.y_vert.mask[:-1,:-1] | self.y_vert.mask[1:,:-1] | \
                    self.y_vert.mask[:-1,1:] | self.y_vert.mask[1:,1:])
            self.mask_rho = asarray(~(~bool_(self.mask_rho) | mask), dtype='d')
        
        if isinstance(self.lon_vert, ma.MaskedArray):
            mask = (self.lon_vert.mask[:-1,:-1] | self.lon_vert.mask[1:,:-1] | \
                    self.lon_vert.mask[:-1,1:] | self.lon_vert.mask[1:,1:])
            self.mask_rho = asarray(~(~bool_(self.mask_rho) | mask), dtype='d')
        
        if isinstance(self.lat_vert, ma.MaskedArray):
            mask = (self.lat_vert.mask[:-1,:-1] | self.lat_vert.mask[1:,:-1] | \
                    self.lat_vert.mask[:-1,1:] | self.lat_vert.mask[1:,1:])
            self.mask_rho = asarray(~(~bool_(self.mask_rho) | mask), dtype='d')
        
        if (self.x_vert is None or self.y_vert is None) and self.geographic:
            self.calculate_projection()
        
        self.calculate_metrics()
        
        if self.geographic and f is None:
            self.f = 2 * 7.29e-5 * cos(self.lat_rho * pi / 180.)
        else:
            self.f = asarray(f, dtype='d')
            
        self.h = h
    
    def _get_mask_u(self):
        return self.mask_rho[:,1:]*self.mask_rho[:,:-1]
    
    def _get_mask_v(self):
        return self.mask_rho[1:,:]*self.mask_rho[:-1,:]
    
    def _get_mask_psi(self):
        return self.mask_rho[1:,1:]*self.mask_rho[:-1,1:]* \
               self.mask_rho[1:,:-1]*self.mask_rho[:-1,:-1]
    
    def _get_x_rho(self):
        return 0.25*(self.x_vert[1:,1:]+self.x_vert[1:,:-1]+ \
                     self.x_vert[:-1,1:]+self.x_vert[:-1,:-1])
    
    def _get_y_rho(self):
        return 0.25*(self.y_vert[1:,1:]+self.y_vert[1:,:-1]+ \
                     self.y_vert[:-1,1:]+self.y_vert[:-1,:-1])
    
    def _get_x_u(self):
        return 0.5*(self.x_vert[:-1,1:-1] + self.x_vert[1:,1:-1])
    
    def _get_y_u(self):
        return 0.5*(self.y_vert[:-1,1:-1] + self.y_vert[1:,1:-1])
    
    def _get_x_v(self):
        return 0.5*(self.x_vert[1:-1,:-1] + self.x_vert[1:-1,1:])
    
    def _get_y_v(self):
        return 0.5*(self.y_vert[1:-1,:-1] + self.y_vert[1:-1,1:])
    
    def _get_x_psi(self):
        return self.x_vert[1:-1,1:-1]
    
    def _get_y_psi(self):
        return self.y_vert[1:-1,1:-1]
    
    def _get_lon_rho(self):
        if self.lon_vert is None or self.lat_vert is None: return
        return 0.25*(self.lon_vert[1:,1:]+self.lon_vert[1:,:-1]+ \
                     self.lon_vert[:-1,1:]+self.lon_vert[:-1,:-1])
    
    def _get_lat_rho(self):
        if self.lon_vert is None or self.lat_vert is None: return
        return 0.25*(self.lat_vert[1:,1:]+self.lat_vert[1:,:-1]+ \
                     self.lat_vert[:-1,1:]+self.lat_vert[:-1,:-1])
    
    def _get_lon_u(self):
        if self.lon_vert is None or self.lat_vert is None: return
        return 0.5*(self.lon_vert[:-1,1:-1] + self.lon_vert[1:,1:-1])
    
    def _get_lat_u(self):
        if self.lon_vert is None or self.lat_vert is None: return
        return 0.5*(self.lat_vert[:-1,1:-1] + self.lat_vert[1:,1:-1])
    
    def _get_lon_v(self):
        if self.lon_vert is None or self.lat_vert is None: return
        return 0.5*(self.lon_vert[1:-1,:-1] + self.lon_vert[1:-1,1:])
    
    def _get_lat_v(self):
        if self.lon_vert is None or self.lat_vert is None: return
        return 0.5*(self.lat_vert[1:-1,:-1] + self.lat_vert[1:-1,1:])
    
    def _get_lon_psi(self):
        if self.lon_vert is None or self.lat_vert is None: return
        return self.lon_vert[1:-1,1:-1]
    
    def _get_lat_psi(self):
        if self.lon_vert is None or self.lat_vert is None: return
        return self.lat_vert[1:-1,1:-1]
    
    
    def _get_sc_w(self):
        if None in (self.theta_s, self.theta_b, self.hc, self.N): return
        return mgrid[-1.0:0.0:1j*(self.N+1)]
    
    def _get_sc_r(self):
        if None in (self.theta_s, self.theta_b, self.hc, self.N): return
        sc_w = mgrid[-1.0:0.0:1j*(self.N+1)]
        return 0.5*(sc_w[1:]+sc_w[:-1])
    
    def _get_Cs_r(self):
        if None in (self.theta_s, self.theta_b, self.hc, self.N): return
        if self.theta_s == 0.0: return self._get_sc_r()
        return (1-self.theta_b)*sinh(self.theta_s*self._get_sc_r())/ \
               sinh(self.theta_s)+0.5*self.theta_b \
               *(tanh(self.theta_s*(self._get_sc_r()+0.5)) \
               - tanh(0.5*self.theta_s))/tanh(0.5*self.theta_s)
    
    def _get_Cs_w(self):
        if None in (self.theta_s, self.theta_b, self.hc, self.N): return
        if self.theta_s == 0.0: return self._get_sc_w()
        return (1-self.theta_b)*sinh(self.theta_s*self._get_sc_w())/ \
               sinh(self.theta_s)+0.5*self.theta_b \
               *(tanh(self.theta_s*(self._get_sc_w()+0.5)) \
                - tanh(0.5*self.theta_s))/tanh(0.5*self.theta_s)
    
    
    def calculate_metrics(self):
        'Calculates pm, pn, dndx, dmde, and angle from x_vert and y_vert'
        if self.geographic:
            gc_dist = vectorize(lambda lon1, lat1, lon2, lat2: \
                      GreatCircle(6378137.0, 6356752.3142, \
                                          lon1, lat1, lon2, lat2).distance)
            lon_temp = 0.5*(self.lon_vert[1:,:]+self.lon_vert[:-1,:])
            lat_temp = 0.5*(self.lat_vert[1:,:]+self.lat_vert[:-1,:])
            if isinstance(lat_temp, ma.MaskedArray): lat_temp = lat_temp.filled(0.0)
            if isinstance(lon_temp, ma.MaskedArray): lon_temp = lon_temp.filled(0.0)
            self.pm = 1.0 / gc_dist(lon_temp[:,1:],  lat_temp[:,1:], \
                                    lon_temp[:,:-1], lat_temp[:,:-1])
            lon_temp = 0.5*(self.lon_vert[:,1:]+self.lon_vert[:,:-1])
            lat_temp = 0.5*(self.lat_vert[:,1:]+self.lat_vert[:,:-1])
            if isinstance(lat_temp, ma.MaskedArray): lat_temp = lat_temp.filled(0.0)
            if isinstance(lon_temp, ma.MaskedArray): lon_temp = lon_temp.filled(0.0)
            self.pn = 1.0 / gc_dist(lon_temp[1:,:],  lat_temp[1:,:], \
                                    lon_temp[:-1,:], lat_temp[:-1,:])
        else:
            x_temp = 0.5*(self.x_vert[1:,:]+self.x_vert[:-1,:])
            y_temp = 0.5*(self.y_vert[1:,:]+self.y_vert[:-1,:])
            self.pm = 1.0 / sqrt(diff(x_temp, axis=1)**2 + diff(y_temp, axis=1)**2)
            x_temp = 0.5*(self.x_vert[:,1:]+self.x_vert[:,:-1])
            y_temp = 0.5*(self.y_vert[:,1:]+self.y_vert[:,:-1])
            self.pn = 1.0 / sqrt(diff(x_temp, axis=0)**2 + diff(y_temp, axis=0)**2)
        
        if any(~isfinite(self.pm)) or any(~isfinite(self.pm)):
            self.pm = ma.masked_where(~isfinite(self.pm), self.pm)
            self.pn = ma.masked_where(~isfinite(self.pn), self.pn)
        
        
        
        # self.pm = extrapolate_mask(self.pm, mask=(self.mask==0.0))
        # self.pn = extrapolate_mask(self.pn, mask=(self.mask==0.0))
        
        if isinstance(self.pn, ma.MaskedArray):
            self.dndx = ma.zeros(self.x_rho.shape, dtype='d')
        else:
            self.dndx = zeros(self.x_rho.shape, dtype='d')
        
        if isinstance(self.pm, ma.MaskedArray):
            self.dmde = ma.zeros(self.x_rho.shape, dtype='d')
        else:
            self.dmde = zeros(self.x_rho.shape, dtype='d')
        
        self.dndx[1:-1,1:-1] = 0.5*(1.0/self.pn[1:-1,2:] - 1.0/self.pn[1:-1,:-2])
        self.dmde[1:-1,1:-1] = 0.5*(1.0/self.pm[2:,1:-1] - 1.0/self.pm[:-2,1:-1])
        
        if self.x_vert is None or self.y_vert is None:
            self.calculate_projection()
        
        self.angle = arctan2(diff(0.5*(self.y_vert[1:,:]+self.y_vert[:-1,:])), \
                           diff(0.5*(self.x_vert[1:,:]+self.x_vert[:-1,:])))
        
        # self.angle = extrapolate_mask(self.angle, mask=(self.mask==0.0))
    
    def calculate_projection(self, proj=None):        
        if isinstance(self.lat_vert, ma.MaskedArray):
            mask_lat = self.lat_vert.mask 
            lat_temp = self.lat_vert.filled(0.0)
        else:
            lat_temp = self.lat_vert
        
        if isinstance(self.lon_vert, ma.MaskedArray): 
            mask_lon = self.lon_vert.mask
            lon_temp = self.lon_vert.filled(0.0)
        else:
            lon_temp = self.lon_vert
        
        self.x_vert, self.y_vert = self.proj(lon_temp, lat_temp)
        
        if isinstance(self.lon_vert, ma.MaskedArray):
            self.x_vert = ma.masked_array(self.x_vert, mask=mask_lon)
        
        if isinstance(self.lat_vert, ma.MaskedArray):
            self.y_vert = ma.masked_array(self.y_vert, mask=mask_lat)
    
    def calculate_orthogonality(self):
        '''
        Calculate orthogonality error in radiens
        '''
        z = self.x_vert + 1j*self.y_vert
        du = diff(z, axis=1); du = (du/abs(du))[:-1,:]
        dv = diff(z, axis=0); dv = (dv/abs(dv))[:,:-1]
        ang1 = arccos(du.real*dv.real + du.imag*dv.imag)
        du = diff(z, axis=1); du = (du/abs(du))[1:,:]
        dv = diff(z, axis=0); dv = (dv/abs(dv))[:,:-1]
        ang2 = arccos(du.real*dv.real + du.imag*dv.imag)
        du = diff(z, axis=1); du = (du/abs(du))[:-1,:]
        dv = diff(z, axis=0); dv = (dv/abs(dv))[:,1:]
        ang3 = arccos(du.real*dv.real + du.imag*dv.imag)
        du = diff(z, axis=1); du = (du/abs(du))[1:,:]
        dv = diff(z, axis=0); dv = (dv/abs(dv))[:,1:]
        ang4 = arccos(du.real*dv.real + du.imag*dv.imag)
        ang = mean([abs(ang1), abs(ang2), abs(ang3), abs(ang4)], axis=0)
        ang = (ang-pi/2.0)
        return ang
    
    def maskpoly(self, polyverts, inverse=False, geographic=None):
        """
        Mask Cartesian points contained within the polygons contained in the
        list'polygons'.
        
        A cell is masked if the cell center (x_rho, y_rho) is within the
        polygon. Other sub-masks (mask_u, mask_v, and mask_psi) are updated
        automatically.
        """
        if geographic is None:
            geographic = self.geographic
        
        mask = self.mask_rho
        
        if inverse:
            mask = asarray(~bool_(mask), dtype='d')
        
        iwater = mask == 1.0
        if geographic:
            x_wet = self._get_lon_rho()[iwater]
            y_wet = self._get_lat_rho()[iwater]
        else:
            x_wet = self._get_x_rho()[iwater]
            y_wet = self._get_y_rho()[iwater]
        
        mask_wet = mask[iwater]
        
        inside = PolyGeom(polyverts).inside(zip(x_wet, y_wet))
        
        if any(inside):
            mask_wet[inside] = 0.0
            mask[iwater] = mask_wet
            if inverse:
                mask = asarray(~bool_(a), dtype='d')
            self.mask_rho = mask
    
    
    x = property(lambda self: self.x_vert)
    y = property(lambda self: self.y_vert)
    lon = property(lambda self: self.lon_vert)
    lat = property(lambda self: self.lat_vert)
    mask = property(lambda self: self.mask_rho)
    
    mask_u   = property(_get_mask_u)
    mask_v   = property(_get_mask_v)
    mask_psi = property(_get_mask_psi)
    x_rho = property(_get_x_rho)
    x_u   = property(_get_x_u)
    x_v   = property(_get_x_v)
    x_psi = property(_get_x_psi)
    y_rho = property(_get_y_rho)
    y_u   = property(_get_y_u)
    y_v   = property(_get_y_v)
    y_psi = property(_get_y_psi)
    lon_rho = property(_get_lon_rho)
    lon_u   = property(_get_lon_u)
    lon_v   = property(_get_lon_v)
    lon_psi = property(_get_lon_psi)
    lat_rho = property(_get_lat_rho)
    lat_u   = property(_get_lat_u)
    lat_v   = property(_get_lat_v)
    lat_psi = property(_get_lat_psi)


class Gridgen(CGrid):
    """docstring for Gridgen"""
    
    # for directory in sys.path:
    #     if directory.endswith('site-packages'):
    #         print os.path.join(directory, '_gridgen.so')
    #         try:
    #             _libgridgen = CDLL(os.path.join(directory, '_gridgen.so'))
    #             break
    #         except:
    #             pass
    
    _libgridgen = pydll.LoadLibrary("libgridgen.dylib")
    
    _libgridgen.gridgen_generategrid2.restype = c_void_p
    _libgridgen.gridnodes_getx.restype = POINTER(POINTER(c_double))
    _libgridgen.gridnodes_gety.restype = POINTER(POINTER(c_double))
    _libgridgen.gridnodes_getnce1.restype = c_int
    _libgridgen.gridnodes_getnce2.restype = c_int
    _libgridgen.gridmap_build.restype = c_void_p
    
    def generate_grid(self):
        
        if self._gn is not None:
            self._libgridgen.gridnodes_destroy(self._gn)
        
        nbry = len(self.xbry)
        
        nsigmas = c_int(0)
        sigmas = c_void_p(0)
        nrect = c_int(0)
        xrect =  c_void_p(0)
        yrect = c_void_p(0)
        
        self._gn = self._libgridgen.gridgen_generategrid2( c_int(nbry), 
             (c_double * nbry)(*self.xbry), (c_double * nbry)(*self.ybry), 
             (c_double * nbry)(*self.beta),
             c_int(self.ul_idx), c_int(self.nx), c_int(self.ny), 
             c_int(0), POINTER(c_double)(), POINTER(c_double)(),
             c_int(self.nnodes), c_int(self.newton), c_double(self.precision),
             c_int(self.checksimplepoly), c_int(self.thin), c_int(self.nppe),
             c_int(self.verbose),
             byref(nsigmas), byref(sigmas), byref(nrect),
             byref(xrect), byref(yrect) )
        
        x = self._libgridgen.gridnodes_getx(self._gn)        
        x = asarray([x[j][i] for j in range(self.ny) for i in range(self.nx)])
        x.shape = (self.ny, self.nx)
        
        y = self._libgridgen.gridnodes_gety(self._gn)        
        y = asarray([y[j][i] for j in range(self.ny) for i in range(self.nx)])
        y.shape = (self.ny, self.nx)
        
        if any(isnan(x)) or any(isnan(y)):
            x = ma.masked_where(isnan(x), x)
            y = ma.masked_where(isnan(y), y)
        
        if self.proj is not None:
            if isinstance(xp, ma.MaskedArray): xp=xp.filled(nan)
            if isinstance(yp, ma.MaskedArray): yp=yp.filled(nan)
            lon, lat = proj(x, y, inverse=True)
            lon = ma.masked_where(isnan(lon), lon)
            lat = ma.masked_where(isnan(lat), lat)
            super(Gridgen, self).__init__(lon, lat, proj=self.proj)
        else:
            super(Gridgen, self).__init__(x, y)
        
    
    def __init__(self, xbry, ybry, beta, shape, ul_idx=0, \
                 focus=None, proj=None, \
                 nnodes=14, precision=1.0e-12, nppe=3, \
                 newton=True, thin=True, checksimplepoly=True, verbose=False):
        
        self.xbry = asarray(xbry, dtype='d')
        self.ybry = asarray(ybry, dtype='d')
        self.beta = asarray(beta, dtype='d')
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
            xbry, ybry = proj(xbry, ybry)
        
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
    x[1:-1,-1] = x[1:-1,-2] + dx*cos(theta)
    y[1:-1,-1] = y[1:-1,-2] + dx*sin(theta)
    
    # west side
    theta = 0.5*(ang[:-1,0]+ang[1:,0])
    dx = 0.5*(1.0/pm[:-1,0]+1.0/pm[1:,0])
    dy = 0.5*(1.0/pn[:-1,0]+1.0/pn[1:,0])
    x[1:-1,0] = x[1:-1,1] - dx*cos(theta)
    y[1:-1,0] = y[1:-1,1] - dx*sin(theta)
    
    # north side
    theta = 0.5*(ang[-1,:-1]+ang[-1,1:])
    dx = 0.5*(1.0/pm[-1,:-1]+1.0/pm[-1,1:])
    dy = 0.5*(1.0/pn[-1,:-1]+1.0/pn[-1,1:])
    x[-1,1:-1] = x[-2,1:-1] - dy*sin(theta)
    y[-1,1:-1] = y[-2,1:-1] + dy*cos(theta)
    
    # here we are now going to the south side..
    theta = 0.5*(ang[0,:-1]+ang[0,1:])
    dx = 0.5*(1.0/pm[0,:-1]+1.0/pm[0,1:])
    dy = 0.5*(1.0/pn[0,:-1]+1.0/pn[0,1:])
    x[0,1:-1] = x[1,1:-1] + dy*sin(theta)
    y[0,1:-1] = y[1,1:-1] - dy*cos(theta)
    
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


def bry_box():
    ax = pl.gca()
    ### return x, y, beta as box 10% away from the axis edges.

if __name__ == '__main__':
    x = [0.2, 0.85, 0.9, 0.82, 0.23]
    y = [0.2, 0.25, 0.5, 0.82, .83]
    beta = [1.0, 1.0, 0.0, 1.0, 1.0]
    
    grd = Gridgen(x, y, beta, (32, 32))
    ax = pl.subplot(111)
    
    BoundaryInteractor(x, y, beta)
    pl.show()