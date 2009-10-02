import octant
xbry = [1, 0, 0, 1]
ybry = [1, 1, 0, 0.1]
beta = [1, 1, 1, 1]
grd = octant.grid.Gridgen(xbry , ybry, beta, (32, 32))

print grd.x, grd.y
