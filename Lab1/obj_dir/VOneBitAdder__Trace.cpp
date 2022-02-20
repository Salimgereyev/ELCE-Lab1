// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOneBitAdder__Syms.h"


//======================

void VOneBitAdder::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VOneBitAdder* t = (VOneBitAdder*)userthis;
    VOneBitAdder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VOneBitAdder::traceChgThis(VOneBitAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneBitAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VOneBitAdder::traceChgThis__2(VOneBitAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneBitAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->x));
        vcdp->chgBit(c+9,(vlTOPp->y));
        vcdp->chgBit(c+17,(vlTOPp->carry_in));
        vcdp->chgBit(c+25,(vlTOPp->sum));
        vcdp->chgBit(c+33,(vlTOPp->carry_out));
        vcdp->chgBit(c+41,((1U & (~ (IData)(vlTOPp->x)))));
        vcdp->chgBit(c+49,((1U & (~ (IData)(vlTOPp->y)))));
        vcdp->chgBit(c+57,((1U & (~ (IData)(vlTOPp->carry_in)))));
        vcdp->chgBit(c+65,((1U & ((~ (IData)(vlTOPp->x)) 
                                  & (~ (IData)(vlTOPp->y))))));
        vcdp->chgBit(c+73,(((~ (IData)(vlTOPp->x)) 
                            & (IData)(vlTOPp->y))));
        vcdp->chgBit(c+81,(((IData)(vlTOPp->x) & (~ (IData)(vlTOPp->y)))));
        vcdp->chgBit(c+89,(((IData)(vlTOPp->x) & (IData)(vlTOPp->y))));
        vcdp->chgBit(c+97,(((IData)(vlTOPp->carry_in) 
                            & ((~ (IData)(vlTOPp->x)) 
                               & (~ (IData)(vlTOPp->y))))));
        vcdp->chgBit(c+105,(((~ (IData)(vlTOPp->carry_in)) 
                             & ((~ (IData)(vlTOPp->x)) 
                                & (IData)(vlTOPp->y)))));
        vcdp->chgBit(c+113,(((~ (IData)(vlTOPp->carry_in)) 
                             & ((IData)(vlTOPp->x) 
                                & (~ (IData)(vlTOPp->y))))));
        vcdp->chgBit(c+121,(((IData)(vlTOPp->carry_in) 
                             & ((IData)(vlTOPp->x) 
                                & (IData)(vlTOPp->y)))));
        vcdp->chgBit(c+129,((((IData)(vlTOPp->carry_in) 
                              & ((~ (IData)(vlTOPp->x)) 
                                 & (~ (IData)(vlTOPp->y)))) 
                             | ((~ (IData)(vlTOPp->carry_in)) 
                                & ((~ (IData)(vlTOPp->x)) 
                                   & (IData)(vlTOPp->y))))));
        vcdp->chgBit(c+137,((((~ (IData)(vlTOPp->carry_in)) 
                              & ((IData)(vlTOPp->x) 
                                 & (~ (IData)(vlTOPp->y)))) 
                             | ((IData)(vlTOPp->carry_in) 
                                & ((IData)(vlTOPp->x) 
                                   & (IData)(vlTOPp->y))))));
    }
}
