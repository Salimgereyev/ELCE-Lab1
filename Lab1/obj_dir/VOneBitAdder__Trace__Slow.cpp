// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOneBitAdder__Syms.h"


//======================

void VOneBitAdder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VOneBitAdder::traceInit, &VOneBitAdder::traceFull, &VOneBitAdder::traceChg, this);
}
void VOneBitAdder::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VOneBitAdder* t = (VOneBitAdder*)userthis;
    VOneBitAdder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VOneBitAdder::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VOneBitAdder* t = (VOneBitAdder*)userthis;
    VOneBitAdder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VOneBitAdder::traceInitThis(VOneBitAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneBitAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VOneBitAdder::traceFullThis(VOneBitAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneBitAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VOneBitAdder::traceInitThis__1(VOneBitAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneBitAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1,"x", false,-1);
        vcdp->declBit(c+9,"y", false,-1);
        vcdp->declBit(c+17,"carry_in", false,-1);
        vcdp->declBit(c+25,"sum", false,-1);
        vcdp->declBit(c+33,"carry_out", false,-1);
        vcdp->declBit(c+1,"OneBitAdder x", false,-1);
        vcdp->declBit(c+9,"OneBitAdder y", false,-1);
        vcdp->declBit(c+17,"OneBitAdder carry_in", false,-1);
        vcdp->declBit(c+25,"OneBitAdder sum", false,-1);
        vcdp->declBit(c+33,"OneBitAdder carry_out", false,-1);
        vcdp->declBit(c+41,"OneBitAdder x_not", false,-1);
        vcdp->declBit(c+49,"OneBitAdder y_not", false,-1);
        vcdp->declBit(c+57,"OneBitAdder carry_in_not", false,-1);
        vcdp->declBit(c+65,"OneBitAdder i1", false,-1);
        vcdp->declBit(c+73,"OneBitAdder i2", false,-1);
        vcdp->declBit(c+81,"OneBitAdder i3", false,-1);
        vcdp->declBit(c+89,"OneBitAdder i4", false,-1);
        vcdp->declBit(c+97,"OneBitAdder i5", false,-1);
        vcdp->declBit(c+105,"OneBitAdder i6", false,-1);
        vcdp->declBit(c+113,"OneBitAdder i7", false,-1);
        vcdp->declBit(c+121,"OneBitAdder i8", false,-1);
        vcdp->declBit(c+129,"OneBitAdder i9", false,-1);
        vcdp->declBit(c+137,"OneBitAdder i10", false,-1);
    }
}

void VOneBitAdder::traceFullThis__1(VOneBitAdder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOneBitAdder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->x));
        vcdp->fullBit(c+9,(vlTOPp->y));
        vcdp->fullBit(c+17,(vlTOPp->carry_in));
        vcdp->fullBit(c+25,(vlTOPp->sum));
        vcdp->fullBit(c+33,(vlTOPp->carry_out));
        vcdp->fullBit(c+41,((1U & (~ (IData)(vlTOPp->x)))));
        vcdp->fullBit(c+49,((1U & (~ (IData)(vlTOPp->y)))));
        vcdp->fullBit(c+57,((1U & (~ (IData)(vlTOPp->carry_in)))));
        vcdp->fullBit(c+65,((1U & ((~ (IData)(vlTOPp->x)) 
                                   & (~ (IData)(vlTOPp->y))))));
        vcdp->fullBit(c+73,(((~ (IData)(vlTOPp->x)) 
                             & (IData)(vlTOPp->y))));
        vcdp->fullBit(c+81,(((IData)(vlTOPp->x) & (~ (IData)(vlTOPp->y)))));
        vcdp->fullBit(c+89,(((IData)(vlTOPp->x) & (IData)(vlTOPp->y))));
        vcdp->fullBit(c+97,(((IData)(vlTOPp->carry_in) 
                             & ((~ (IData)(vlTOPp->x)) 
                                & (~ (IData)(vlTOPp->y))))));
        vcdp->fullBit(c+105,(((~ (IData)(vlTOPp->carry_in)) 
                              & ((~ (IData)(vlTOPp->x)) 
                                 & (IData)(vlTOPp->y)))));
        vcdp->fullBit(c+113,(((~ (IData)(vlTOPp->carry_in)) 
                              & ((IData)(vlTOPp->x) 
                                 & (~ (IData)(vlTOPp->y))))));
        vcdp->fullBit(c+121,(((IData)(vlTOPp->carry_in) 
                              & ((IData)(vlTOPp->x) 
                                 & (IData)(vlTOPp->y)))));
        vcdp->fullBit(c+129,((((IData)(vlTOPp->carry_in) 
                               & ((~ (IData)(vlTOPp->x)) 
                                  & (~ (IData)(vlTOPp->y)))) 
                              | ((~ (IData)(vlTOPp->carry_in)) 
                                 & ((~ (IData)(vlTOPp->x)) 
                                    & (IData)(vlTOPp->y))))));
        vcdp->fullBit(c+137,((((~ (IData)(vlTOPp->carry_in)) 
                               & ((IData)(vlTOPp->x) 
                                  & (~ (IData)(vlTOPp->y)))) 
                              | ((IData)(vlTOPp->carry_in) 
                                 & ((IData)(vlTOPp->x) 
                                    & (IData)(vlTOPp->y))))));
    }
}
