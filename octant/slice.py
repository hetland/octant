# encoding: utf-8
"""Tools for slicing model fields."""
__docformat__ = "restructuredtext en"

def isoslice(var,prop,isoval=0,axis=0,masking=True):
    """
    result = isoslice(variable,property[,isoval=0])
    
    result is a a projection of variable at property == isoval in the first
    nonsingleton dimension.  In the case when there is more than one zero
    crossing, the results are averaged.
    
    EXAMPLE:
    Assume two three dimensional variable, s (salt), z (depth), and
    u (velicity), all on the same 3D grid.  x and y are the horizontal 
    positions, with the same horizontal dimensions as z (the 3D depth 
    field).  Here, assume the vertical dimension, that will be projected,
    is the first.  
    
    s_at_m5  = isoslice(s,z,-5);        # s at z == -5
    h_at_s30 = isoslice(z,s,30);       # z at s == 30
    u_at_s30 = isoslice(u,s,30);       # u at s == 30
    """
    if (len(var.squeeze().shape)<=2):
        raise ValueError, 'variable must have at least two dimensions'
    if not prop.shape == var.shape:
        raise ValueError, 'dimension of var and prop must be identical'
    var = var.swapaxes(0, axis)
    prop = prop.swapaxes(0, axis)
    prop=prop-isoval
    sz = shape(var)
    var = var.reshape(sz[0],-1)
    prop = prop.reshape(sz[0],-1)
    #find zero-crossings (zc == 1)
    zc =  where( (prop[:-1,:]*prop[1:,:])<0.0 ,1.0, 0.0)
    varl = var[:-1,:]*zc
    varh = var[1:,:]*zc
    propl = prop[:-1,:]*zc
    proph = prop[1:,:]*zc
    result = varl - propl*(varh-varl)/(proph-propl)
    result = where(zc==1., result, 0.)
    szc = zc.sum(axis=0)
    szc = where(szc==0., 1, szc)
    result = result.sum(axis=0)/szc
    if masking:
        result = ma.masked_where(zc.sum(axis=0)==0, result)
        if all(result.mask):
            raise Warning, 'property==%f out of range (%f, %f)' % \
                           (isoval, (prop+isoval).min(), (prop+isoval).max())
    result = result.reshape(sz[1:])
    return(result)

def zslice(z, q, qo, mode='spline'):
    
    if mode=='linear':
        imode=0
    elif mode=='spline':
        imode=1
    else:
        imode=1
        print mode, ' not supported, defaulting to splines'
    
    z = atleast_3d(z)
    q = atleast_3d(q)
    assert z.shape == q.shape, 'z and q must be the same shape'
    
    qo *= ones(q.shape[1:])
    
    q2d = _iso.zslice(z, q, qo, imode)
    if any(q2d==1e20):
        q2d = ma.masked_where(q2d==1e20, q2d)
    
    return q2d

def iso_integrate(z_w, q, z_iso):
    z_w = atleast_3d(z_w)
    q = atleast_3d(q)
    if isinstance(z_iso, ma.MaskedArray):
        z_iso = z_iso.filled(1e20)
    z_iso *= ones(q.shape[1:])
    return _iso.integrate(z_w, q, z_iso)

def surface(z, q, qo):
    assert len(z.shape) == 3, 'z must be 3D'
    assert len(q.shape) == 3, 'q must be 3D'
    assert z.shape == q.shape, 'z and q must be the same size'
    qo = qo * ones(q.shape[1:])
    z_iso = _iso.surface(z, q, qo)
    if any(z_iso==1e20):
        return ma.masked_where(z_iso==1e20, z_iso)
    else:
        return z_iso

# def transect(x, y, xi, yi, prop):
#     '''propi = transect(x, y, xi, yi, prop)
#     
#        Interpolates property prop on a horizontal grid x, y to a
#        transect given by the points in arrays xi, yi.  prop may be
#        two- or more dimensional, but the two rightmost dimensions must
#        match those of x and y (which must both be two dimensional).  The
#        grid x, y may be given as a masked array.'''
#     if ma.isMaskedArray(x) and ma.isMaskedArray(y):
#         mask = ~x.mask & ~y.mask
#     else:
#         mask = ones(x.shape, dtype='bool')
#     x = x[mask]
#     y = y[mask]
#     tri = delaunay.Triangulation(x, y)
#     if prop.ndim == 2:
#         return tri.nn_interpolator(prop[mask])(xi, yi)
#     propi = empty(prop.shape[:-2]+(len(xi),), 'd')
#     for idx in zip(*indices(prop.shape[:-2])):
#         propi[idx, :] = tri.nn_interpolator(prop[idx, mask].flat)(xi, yi)
#     return propi
