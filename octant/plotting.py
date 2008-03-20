"""
octant.plotting - some plotting functions

The plotting module provides some specialized plotting
functions ofen needed in ocean modelling.

Requirements:
=============
pylab, datetime, numpy, scipy

Functions:
==========

sticks - velocity vector stick plot along a time axis
cmap_discretize - create a discrete colorbar from standard colormaps
                  which can be applied to e.g. pcolor
layers - a function for plotting vertical transects based on layer heights

"""

import pylab as pl
import datetime as dt
import numpy as np
from scipy import interpolate

def sticks(date,u,v,tnorm=0.1,figurewidth=8,pickind=1,color='blue'):
    """
    sticks - create velocity stick plot

    sticks(date, u, v, tnorm=0.1, color='blue' \
            figurewidth=8, pickind=1)

    date - list/array of datetime elements
    u - list/array of velocity in eastern direction
    v - list/array of velocity in northern direction
    tnorm - length of a u=max(u,v) as part of the time axis
    color - color of sticks
    figurewidth - width of the figure in inch
    pickind - plot every "pickind"-vector
    """
    onedt=(date[-1]-date[0])
    onedt=dt.timedelta(tnorm*onedt.days,tnorm*onedt.seconds)
    daynorm=onedt.days+onedt.seconds/86400.0

    u=np.asarray(u)
    v=np.asarray(v)
    norm=pl.maximum(pl.absolute(u).max(),pl.absolute(v).max())

    t=[]
    f=[]
    mask=[]
    fac=pickind
    for i in range(int(len(date)/fac)):
        t.append(pl.date2num(date[i*fac]))
        f.append(0.0)
        mask.append(False)
        t.append(pl.date2num(date[i*fac] \
                + dt.timedelta(u[i*fac]/norm*onedt.days,u[i*fac]/norm*onedt.seconds)))
        f.append(v[i*fac]/norm*daynorm)
        mask.append(False)
        t.append(pl.date2num(date[i*fac]))
        f.append(0.0)
        mask.append(True)
    
    t=np.asarray(t)
    f=np.asarray(f)
    mask=np.asarray(mask)
    f=np.ma.masked_array(f,mask=mask)
    
    pl.figure(figsize=(figurewidth,tnorm*figurewidth))
    pl.plot_date(t,f,'-',color=color)
    ax=pl.gca()
    ax.set_aspect('equal')
    ax.set_xlim(t[0],t[-1])
    ax.set_ylim(-1.0*daynorm,1.0*daynorm)
    ax.set_frame_on(False)
    ax.yaxis.set_visible(False)

def cmap_discretize(cmap, N):
    """Return a discrete colormap from the continuous colormap cmap.
    
        cmap: colormap instance, eg. cm.jet. 
        N: Number of colors.
    
    Example
        x = resize(arange(100), (5,100))
        djet = cmap_discretize(cm.jet, 5)
        imshow(x, cmap=djet)
    """

    cdict = cmap._segmentdata.copy()
    # N colors
    colors_i = pl.linspace(0,1.,N)
    # N+1 indices
    indices = pl.linspace(0,1.,N+1)
    for key in ('red','green','blue'):
        # Find the N colors
        D = np.array(cdict[key])
        I = interpolate.interp1d(D[:,0], D[:,1])
        colors = I(colors_i)
        # Place these colors at the correct indices.
        A = np.zeros((N+1,3), float)
        A[:,0] = indices
        A[1:,1] = colors
        A[:-1,2] = colors
        # Create a tuple for the dictionary.
        L = []
        for l in A:
            L.append(tuple(l))
        cdict[key] = tuple(L)
    # Return colormap object.
    return pl.matplotlib.colors.LinearSegmentedColormap('colormap',cdict,1024)

def layers(field,bath,h=None,xc=None,lines=None,FillValue=-9999.0,shading='flat'):
        """
        plot 2d field as layers with pcolor
        
        usage: layers(2dfield[kmax,xmax],
                      bath[xmax],
                      h=h[kmax,xmax],
                      xc=xc[xmax],
                      lines=LineColor)

        h,xc,FillValue and shading are optional, default is sigma
        coordinates h=bath/kmax, default FillValue=-9999.0,
        default shading='flat'
        and default xc is the vector of array indices

        If lines is given, the layer interfaces are
        plotted as lines in color e.g. lines='black'
        """
        
        (kmax,xmax)=field.shape
        
        if xc==None:
            xc=pl.arange(xmax,dtype='f')
        
        dx2=0.5*(xc[1]-xc[0])
        xco=np.interp((arange(2*xmax+1)-1)/2.0,arange(xmax),xc,left=xc[0]-dx2,right=xc[-1]+dx2)
        bathd=np.interp(xco,xc,bath,left=bath[0],right=bath[-1])

        if h==None:
            h=np.asarray([bath/kmax for k in range(kmax)])
        
        zi=-bath+pl.cumsum(numpy.vstack([zeros((1,xmax)),h]),axis=0);
        zd=np.zeros((kmax+1,2*xmax+1),dtype='f')
        fieldd=np.zeros((kmax+1,2*xmax+1),dtype='f')
        
        for k in range(kmax):
            for x in range(xmax):
                

                if (x == 0):
                    zd[k,0]=zi[k,x]
                    zd[k,1]=zi[k,x]
                    fieldd[k,0]=field[k,x]
                    fieldd[k,1]=field[k,x]
                elif (bath[x]<=-10.0):
                    zd[k,2*x+1]=FillValue
                    fieldd[k,2*x+1]=FillValue
                    fieldd[k,2*x]=FillValue
                    if (bath[x-1]<=-10.0):
                        zd[k,2*x]=FillValue
                    else:
                        zd[k,2*x]=zi[k,x-1]
                else:
                    zd[k,2*x+1]=zi[k,x]
                    fieldd[k,2*x+1]=field[k,x]
                    fieldd[k,2*x]=field[k,x]
                    if (bath[x-1]<=-10.0):
                        zd[k,2*x]=zi[k,x]
                    else:
                        zd[k,2*x]=0.5*(zi[k,x-1]+zi[k,x])
                
                if x == xmax-1:
                    zd[k,-1]=zi[k,x]
                    fieldd[k,-1]=field[k,x]

        fmasked=np.ma.masked_where(fieldd==FillValue,fieldd)
         
        pcolor(xco,np.ma.array(zd,mask=fmasked.mask),fmasked,shading=shading)
        
        if lines!=None:
            xi=np.array([xc for k in range(kmax)])
            bathi=np.array([bath for k in range(kmax)])
            plot(xi.T,np.ma.masked_where(bathi.T<=-10.0,zi[:-1,:].T),color=lines)
        axis('tight')
        show()


