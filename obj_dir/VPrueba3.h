// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPrueba3_H_
#define _VPrueba3_H_

#include "verilated.h"

class VPrueba3__Syms;

//----------

VL_MODULE(VPrueba3) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_OUT8(count,0,0);
    VL_IN8(n,7,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VPrueba3__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VPrueba3& operator= (const VPrueba3&);  ///< Copying not allowed
    VPrueba3(const VPrueba3&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VPrueba3(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VPrueba3();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VPrueba3__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VPrueba3__Syms* symsp, bool first);
  private:
    static QData _change_request(VPrueba3__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VPrueba3__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VPrueba3__Syms* __restrict vlSymsp);
    static void _eval_settle(VPrueba3__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(VPrueba3__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
