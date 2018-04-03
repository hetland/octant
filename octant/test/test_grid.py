
import numpy as np
import matplotlib.pyplot as pyplot

import octant


## Create a 'snail' grid as a test case
ro = 10

Ny = 10
Nx = 54

theta = np.linspace(0, 540, Nx+1) * pi / 180.0
r = np.linspace(ro, ro+10, Ny+1)

r, theta = np.meshgrid(r, theta)
r = r + np.linspace(0, 2*ro, Nx+1)[:, np.newaxis]

x = r * np.sin(theta)
y = r * np.cos(theta)

grd = octant.CGrid(x, y)

plt.pcolormesh(grd.x, grd.y, grd.angle)
