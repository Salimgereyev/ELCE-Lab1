// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOneBitAdder.h for the primary calling header

#include "VOneBitAdder.h"
#include "VOneBitAdder__Syms.h"

//==========

VL_CTOR_IMP(VOneBitAdder) {
    VOneBitAdder__Syms* __restrict vlSymsp = __VlSymsp = new VOneBitAdder__Syms(this, name());
    VOneBitAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VOneBitAdder::__Vconfigure(VOneBitAdder__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VOneBitAdder::~VOneBitAdder() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VOneBitAdder::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VOneBitAdder::eval\n"); );
    VOneBitAdder__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VOneBitAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("OneBitAdder.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VOneBitAdder::_eval_initial_loop(VOneBitAdder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("OneBitAdder.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VOneBitAdder::_combo__TOP__1(VOneBitAdder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneBitAdder::_combo__TOP__1\n"); );
    VOneBitAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sum = ((((IData)(vlTOPp->carry_in) & ((~ (IData)(vlTOPp->x)) 
                                                  & (~ (IData)(vlTOPp->y)))) 
                    | ((~ (IData)(vlTOPp->carry_in)) 
                       & ((~ (IData)(vlTOPp->x)) & (IData)(vlTOPp->y)))) 
                   | (((~ (IData)(vlTOPp->carry_in)) 
                       & ((IData)(vlTOPp->x) & (~ (IData)(vlTOPp->y)))) 
                      | ((IData)(vlTOPp->carry_in) 
                         & ((IData)(vlTOPp->x) & (IData)(vlTOPp->y)))));
    vlTOPp->carry_out = ((((IData)(vlTOPp->x) | (IData)(vlTOPp->y)) 
                          & (IData)(vlTOPp->carry_in)) 
                         | ((IData)(vlTOPp->x) & (IData)(vlTOPp->y)));
}

void VOneBitAdder::_eval(VOneBitAdder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneBitAdder::_eval\n"); );
    VOneBitAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VOneBitAdder::_eval_initial(VOneBitAdder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneBitAdder::_eval_initial\n"); );
    VOneBitAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VOneBitAdder::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneBitAdder::final\n"); );
    // Variables
    VOneBitAdder__Syms* __restrict vlSymsp = this->__VlSymsp;
    VOneBitAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VOneBitAdder::_eval_settle(VOneBitAdder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneBitAdder::_eval_settle\n"); );
    VOneBitAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VOneBitAdder::_change_request(VOneBitAdder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneBitAdder::_change_request\n"); );
    VOneBitAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VOneBitAdder::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneBitAdder::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((x & 0xfeU))) {
        Verilated::overWidthError("x");}
    if (VL_UNLIKELY((y & 0xfeU))) {
        Verilated::overWidthError("y");}
    if (VL_UNLIKELY((carry_in & 0xfeU))) {
        Verilated::overWidthError("carry_in");}
}
#endif  // VL_DEBUG

void VOneBitAdder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOneBitAdder::_ctor_var_reset\n"); );
    // Body
    x = VL_RAND_RESET_I(1);
    y = VL_RAND_RESET_I(1);
    carry_in = VL_RAND_RESET_I(1);
    sum = VL_RAND_RESET_I(1);
    carry_out = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
