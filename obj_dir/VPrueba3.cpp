// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPrueba3.h for the primary calling header

#include "VPrueba3.h"          // For This
#include "VPrueba3__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VPrueba3) {
    VPrueba3__Syms* __restrict vlSymsp = __VlSymsp = new VPrueba3__Syms(this, name());
    VPrueba3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPrueba3::__Vconfigure(VPrueba3__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPrueba3::~VPrueba3() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VPrueba3::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPrueba3::eval\n"); );
    VPrueba3__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPrueba3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VPrueba3::_eval_initial_loop(VPrueba3__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void VPrueba3::_initial__TOP__1(VPrueba3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPrueba3::_initial__TOP__1\n"); );
    VPrueba3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at Prueba3.v:18
    vlTOPp->count = 0U;
}

void VPrueba3::_eval(VPrueba3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPrueba3::_eval\n"); );
    VPrueba3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPrueba3::_eval_initial(VPrueba3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPrueba3::_eval_initial\n"); );
    VPrueba3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VPrueba3::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPrueba3::final\n"); );
    // Variables
    VPrueba3__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPrueba3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPrueba3::_eval_settle(VPrueba3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPrueba3::_eval_settle\n"); );
    VPrueba3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData VPrueba3::_change_request(VPrueba3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPrueba3::_change_request\n"); );
    VPrueba3* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPrueba3::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPrueba3::_eval_debug_assertions\n"); );
}
#endif // VL_DEBUG

void VPrueba3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPrueba3::_ctor_var_reset\n"); );
    // Body
    count = VL_RAND_RESET_I(1);
    n = VL_RAND_RESET_I(8);
}
