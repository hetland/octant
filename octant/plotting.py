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
ztodepth - change negative z-ax ticklabels to positive depths
layers - a function for plotting vertical transects based on layer heights

"""
__docformat__ = "restructuredtext en"

import matplotlib.pyplot as plt
from datetime import timedelta
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
    onedt=timedelta(tnorm*onedt.days,tnorm*onedt.seconds)
    daynorm=onedt.days+onedt.seconds/86400.0

    u=np.asarray(u)
    v=np.asarray(v)
    norm=np.maximum(np.absolute(u).max(),np.absolute(v).max())

    t=[]
    f=[]
    mask=[]
    fac=pickind
    for i in range(int(len(date)/fac)):
        t.append(plt.date2num(date[i*fac]))
        f.append(0.0)
        mask.append(False)
        t.append(plt.date2num(date[i*fac] \
                + timedelta(u[i*fac]/norm*onedt.days,u[i*fac]/norm*onedt.seconds)))
        f.append(v[i*fac]/norm*daynorm)
        mask.append(False)
        t.append(plt.date2num(date[i*fac]))
        f.append(0.0)
        mask.append(True)
    
    t=np.asarray(t)
    f=np.asarray(f)
    mask=np.asarray(mask)
    f=np.ma.masked_array(f,mask=mask)
    
    plt.figure(figsize=(figurewidth,tnorm*figurewidth))
    plt.plot_date(t,f,'-',color=color)
    ax=plt.gca()
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
    colors_i = np.linspace(0,1.,N)
    # N+1 indices
    indices = np.linspace(0,1.,N+1)
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
    return plt.matplotlib.colors.LinearSegmentedColormap('colormap',cdict,1024)

def layers(field,bath,h=None,xc=None,lines=None,missingbath=-10.0,fillvalue=-9999.0,lw=0.5,**kwargs):
        """
        plot 2d field as layers with pcolor based on layer heights.
                  (perfect for GETM results)
        
        usage: layers(2dfield[kmax,xmax],
                      bath[xmax],
                      h=h[kmax,xmax],
                      xc=xc[xmax],
                      missingbath=-10.0,
                      fillvalue=-9999.0,
                      lines=LineColor,
                      lw=0.5,
                      **kwargs)

        h,xc,missingbath,fillvalue,shading and lw are optional, default is sigma
        coordinates h=bath/kmax, default FillValue=-9999.0,
        default lw=0.05, and default xc is the vector of array indices.

        Polygons where bath == missingbath in any point are filled
        with fillvalue and are masked afterwards.
        The 2dfield can be preconfigured with (fillvalue)s where
        "layers" should not plot any value (e.g. if certain layers
        should be removed)
        
        Additional keyword arguments are passed to pcolor such as
        cmap=cm.hsv or shading='flat'.

        If lines is given, the layer interfaces are
        plotted as lines in color e.g. lines='black'
        """
        
        (kmax,xmax)=field.shape
        
        if xc==None:
            xc=np.arange(xmax,dtype='f')
        
        dx2=0.5*(xc[1]-xc[0])
        xco=np.interp((np.arange(2*xmax+1)-1)/2.0,np.arange(xmax),xc,left=xc[0]-dx2,right=xc[-1]+dx2)
        bathd=np.interp(xco,xc,bath,left=bath[0],right=bath[-1])

        if h==None:
            h=np.asarray([bath/kmax for k in range(kmax)])
        
        zi=-bath+np.cumsum(np.vstack([np.zeros((1,xmax)),h]),axis=0);
        zd=np.zeros((kmax+1,2*xmax+1),dtype='f')
        fieldd=np.zeros((kmax+1,2*xmax+1),dtype='f')
        
        for k in range(kmax):
            for x in range(xmax):
                

                if (x == 0):
                    zd[k,0]=zi[k,x]
                    zd[k,1]=zi[k,x]
                    fieldd[k,0]=field[k,x]
                    fieldd[k,1]=field[k,x]
                elif (bath[x]<=missingbath):
                    zd[k,2*x+1]=fillvalue
                    fieldd[k,2*x+1]=fillvalue
                    fieldd[k,2*x]=fillvalue
                    if (bath[x-1]<=missingbath):
                        zd[k,2*x]=fillvalue
                    else:
                        zd[k,2*x]=zi[k,x-1]
                else:
                    zd[k,2*x+1]=zi[k,x]
                    fieldd[k,2*x+1]=field[k,x]
                    fieldd[k,2*x]=field[k,x]
                    if (bath[x-1]<=missingbath):
                        zd[k,2*x]=zi[k,x]
                    else:
                        zd[k,2*x]=0.5*(zi[k,x-1]+zi[k,x])
                
                if x == xmax-1:
                    zd[k,-1]=zi[k,x]
                    fieldd[k,-1]=field[k,x]

        fmasked=np.ma.masked_where(fieldd==fillvalue,fieldd)
         
        plt.pcolor(xco,np.ma.array(zd,mask=fmasked.mask),fmasked,**kwargs)
        
        if lines!=None:
            xi=np.array([xc for k in range(kmax)])
            bathi=np.array([bath for k in range(kmax)])
            plt.plot(xi.T,np.ma.masked_where(bathi.T<=-10.0,zi[:-1,:].T), \
                    color=lines,lw=lw)
        plt.axis('tight')


def ztodepth(ax=None,ylabelstr='depth [m]'):
    """
    ztodepth - change negative z-ax ticklabels 
                 on the y-axis to positive depths

    usage: ztodepth(ax=gca(),
                    ylabelstr='depth [m]')

    ztodepth gets the yticks and creates positive yticklabels
    for annotation in depth instead of position on z-axis.
    Its recommended to change yticks if needed before
    running ztodepth.

    If ylabelstr is not set to "None", then the y-axis gets
    the label "depth [m]" or other specified with ylabelstr.

    """
    
    if ax is None:
        ax = plt.gca()
    
    yt = ax.get_yticks()
    dtl = [str(y*-1.0) for y in yt]
    ax.set_yticklabels(dtl)
    if ylabelstr != None:
        ax.set_ylabel(ylabelstr)

def drawscale(m,lon,lat,length,yoffset=None,fontsize=8.0,linewidth=0.5):
       """draw a fancy map scale from lon-length/2,lat-yoffset to
       lon-length/2,lat-yoffset, label it with actual distance in km
       
       usage drawscale(m - mapping object,
                       lon - lon value of center of scale
                       lat - lat value of center of scale
                       length - maximum length shown by scale in km
                       yoffset - height of scale in "km"
                       fontsize - fontsize of ticklabels
                       linewidth - width of used lines)
       
       """
       length = length*1000 #input length is km

       # idea for future: try to divide by 5, 4 and 3 to find
       # the best split factor and then create the x-coordinates

       #we need 5 sets of x coordinates (in map units)
       #center of scale
       xc,yc = m(lon,lat)
       #left edge of scale
       lon1,lat1 = m(xc-length/2,yc,inverse=True)
       x1,y1 = m(lon1,lat1)
       #quarter scale
       lon2,lat2 = m(xc-length/4,yc,inverse=True)
       x2,y2 = m(lon2,lat2)
       #three quarter scale
       lon3,lat3 = m(xc+length/4,yc,inverse=True)
       x3,y3 = m(lon3,lat3)
       #right edge of scale
       lon4,lat4 = m(xc+length/2,yc,inverse=True)
       x4,y4 = m(lon4,lat4)

       if yoffset is None:
           yoffset = 0.05*length
       else:
           yoffset = 1000.0*yoffset

       #plot top line
       ytop = yc+yoffset/2
       ybottom = yc-yoffset/2
       ytick = ybottom - yoffset/2
       ytext = ytick - yoffset/2
       m.plot([x1,x4],[ytop,ytop],color='k',lw=linewidth)
       #plot bottom line
       m.plot([x1,x4],[ybottom,ybottom],color='k',lw=linewidth)
       #plot left edge
       m.plot([x1,x1],[ybottom,ytop],color='k',lw=linewidth)
       #plot right edge
       m.plot([x4,x4],[ybottom,ytop],color='k',lw=linewidth)

       #make a filled black box from left edge to 1/4 way across
       plt.fill([x1,x2,x2,x1,x1],[ytop,ytop,ybottom,ybottom,ytop], \
               'k',lw=linewidth)
       #make a filled white box from 1/4 way across to 1/2 way across
       plt.fill([x2,xc,xc,x2,x2],[ytop,ytop,ybottom,ybottom,ytop], \
               'w',lw=linewidth)
       #make a filled white box from 1/2 way across to 3/4 way across
       plt.fill([xc,x3,x3,xc,xc],[ytop,ytop,ybottom,ybottom,ytop], \
               'k',lw=linewidth)
       #make a filled white box from 3/4 way across to end
       plt.fill([x3,x4,x4,x3,x3],[ytop,ytop,ybottom,ybottom,ytop], \
               'w',lw=linewidth)

       #plot 3 tick marks at left edge, center, and right edge
       m.plot([x1,x1],[ytick,ybottom],color='k',lw=linewidth)
       m.plot([xc,xc],[ytick,ybottom],color='k',lw=linewidth)
       m.plot([x4,x4],[ytick,ybottom],color='k',lw=linewidth)

       #label 3 tick marks
       plt.text(x1,ytext,'%d' % (0),\
            horizontalalignment='center',\
            verticalalignment='top',\
            fontsize=fontsize)
       plt.text(xc,ytext,'%d' % (round((length/2)/1000)),\
            horizontalalignment='center',\
            verticalalignment='top',\
            fontsize=fontsize)
       plt.text(x4,ytext,'%d' % (round((length)/1000)),\
            horizontalalignment='center',\
            verticalalignment='top',\
            fontsize=fontsize)

       #put units on top
       plt.text(xc,ytop+yoffset/2,'km',\
            horizontalalignment='center',\
            verticalalignment='bottom',\
            fontsize=fontsize)

