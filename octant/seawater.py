# encoding: utf-8
"""
Tools for working with oceanic data
"""
import numpy as np

def psu2reference_salinity(psu):
    '''Return reference salinity given practical salinity
    
        Fundamental determinations of the physical properties of seawater have
        previously been made for Atlantic surface waters, referred to as
        “Standard Seawater”. In this paper a Reference Composition consisting
        of the major components of Atlantic surface seawater is determined
        using these earlier analytical measurements. The stoichiometry of sea
        salt introduced here is thus based on the most accurate prior
        determination of the composition, adjusted to achieve charge balance
        and making use of the 2005 atomic weights. Reference Seawater is
        defined as any seawater that has the Reference Composition and a new
        Reference-Composition Salinity SR is defined to provide the best
        available estimate of the Absolute Salinity of both Reference Seawater
        and the Standard Seawater that was used in the measurements of the
        physical properties. From a p ractical point of view, the value of SR
        can be related to the Practical Salinity S by
        
                SR = (35.165 04 / 35) g kg–1 × S .
        
        Reference Seawater that has been “normalized” to a Practical Salinity
         of 35 has a Reference-Composition Salinity of exactly
        
                SR = 35.165 04 g kg–1.
                    
            Millero, F. J., R. Feistel, D. G. Wright and T. J. McDougall,
            2008a: The composition of Standard Seawater and the definition of
            the Reference-Composition Salinity Scale. Deep- Sea Research I,
            55, 50-72.
    
    '''
    return psu * (35.16504 / 35.0)


def o2_saturation(T,S):
    """Return saturation value of oxygen.
    
    Parameters
    ----------
    T : array_like
        Temperature (˚C)
    S : array_like
        Salinity (PSU)
    
    Returns
    -------
    o2_sat : array_like
        concentrations of o2 [ millimole O2 / m3 ] for a given temperature and
        salinity (at STP)
    
    """
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
