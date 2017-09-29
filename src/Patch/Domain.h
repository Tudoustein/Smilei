#ifndef DOMAIN_H
#define DOMAIN_H

#include "VectorPatch.h" 

class Geometry;
class Patch;
class Diagnostic;

class Params;
class SimWindow;
class Timers;

class Domain
{
public:
    Domain( Params& params );
    ~Domain();

    void build( Params& params, SmileiMPI* smpi, VectorPatch& vecPatches, OpenPMDparams& openPMD );
    void solveMaxwell( Params& params, SimWindow* simWindow, int itime, double time_dual, Timers& timers );
    void clean();
    
    Geometry* cartGeom;
    Patch* cartPatch;
    VectorPatch VecPatchCart;
    Diagnostic* diagCart; 
   
};

#endif
