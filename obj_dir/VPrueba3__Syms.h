// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VPrueba3__Syms_H_
#define _VPrueba3__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VPrueba3.h"

// SYMS CLASS
class VPrueba3__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VPrueba3*                      TOPp;
    
    // CREATORS
    VPrueba3__Syms(VPrueba3* topp, const char* namep);
    ~VPrueba3__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
