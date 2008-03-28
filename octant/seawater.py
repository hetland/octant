#!/usr/bin/env python2.4
"""
Tools for working with oceanic data
"""
import numpy as np

def rho_stp(s,t,p=0):
    """
    returns density as a function of:
     s = Salinity in psu,
     t = Temperature in deg C,
     p = Pressure in dbar (default = 0)
    """
    p1 = 999.842594
    p2 =   6.793952E-2
    p3 =  -9.09529E-3
    p4 =   1.001685E-4
    p5 =  -1.120083E-6
    p6 =   6.536332E-9
    p7 =   8.24493E-1
    p8 =  -4.0899E-3
    p9 =   7.6438E-5
    p10 = -8.2467E-7
    p11 =  5.3875E-9
    p12 = -5.72466E-3
    p13 =  1.0227E-4
    p14 = -1.6546E-6
    p15 =  4.8314E-4
    k1 = 19652.21
    k2 =   148.4206
    k3 =    -2.327105
    k4 =     1.360477E-2
    k5 =    -5.155288E-5
    k6 =     3.239908
    k7 =     1.43713E-3
    k8 =     1.16092E-4
    k9 =    -5.77905E-7
    k10 =    8.50935E-5
    k11 =   -6.12293E-6
    k12 =    5.2787E-8
    k13 =   54.6746
    k14 =   -0.603459
    k15 =    1.09987E-2
    k16 =   -6.1670E-5
    k17 =    7.944E-2
    k18 =    1.6483E-2
    k19 =   -5.3009E-4
    k20 =    2.2838E-3
    k21 =   -1.0981E-5
    k22 =   -1.6078E-6
    k23 =    1.91075E-4
    k24 =   -9.9348E-7
    k25 =    2.0816E-8
    k26 =    9.1697E-10
    ro_st0 = p1 + p2*t + p3*t**2 + p4*t**3 + p5*t**4 + p6*t**5\
            + p7*s + p8*s*t + p9*t**2*s + p10*t**3*s + p11*t**4*s\
            + p12*s**1.5 + p13*t*s**1.5 + p14*t**2*s**1.5 + p15*s**2
    k_stp = k1 + k2*t + k3*t**2 + k4*t**3 + k5*t**4\
           + k6*p + k7*t*p + k8*t**2*p + k9*t**3*p\
           + k10*p**2 + k11*t*p**2 + k12*t**2*p**2\
           + k13*s + k14*t*s + k15*t**2*s + k16*t**3*s\
           + k17*s**1.5 + k18*t*s**1.5 + k19*t**2*s**1.5\
           + k20*p*s + k21*t*p*s + k22*t**2*p*s + k23*p*s**1.5\
           + k24*p**2*s + k25*t*p**2*s + k26*t**2*p**2*s
    return ro_st0/(1.0 - (p/k_stp))

def o2_sat(T,S):
    """returns saturation concentrations of o2 [ millimole O2 / m3 ] for 
    a given temperature and salinity (at STP)"""
    A1 = -173.4292
    A2 =  249.6339
    A3 =  143.3483
    A4 =  -21.8492
    B1 =   -0.033096
    B2 =    0.014259
    B3 =   -0.0017000
    # Convert T to deg. C to deg. K
    T = T + 273.15
    # O2 Concentration in mg/l
    # [from Millero and Sohn, Chemical Oceanography, CRC Press, 1992]
    O = np.exp(A1 + A2*(100.0/T) + A3*np.log(T/100.0) + A4*(T/100.0) + \
            S*(B1 + B2*(T/100.0) + B3*((T/100.0)**2)) )
    # Convert to mmol/m3
    #  mmol/m3 = 44.66 ml/l
    #  mg/l = ml/l * 1.42903 mg/ml
    return O*(44.66*1.42903)
