// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFSM_bin.h for the primary calling header

#ifndef VERILATED_VFSM_BIN___024ROOT_H_
#define VERILATED_VFSM_BIN___024ROOT_H_  // guard

#include "verilated.h"


class VFSM_bin__Syms;

class alignas(VL_CACHE_LINE_BYTES) VFSM_bin___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(in,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(out,0,0);
    CData/*3:0*/ FSM_bin__DOT__state_dout;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__in__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFSM_bin__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VFSM_bin___024root(VFSM_bin__Syms* symsp, const char* namep);
    ~VFSM_bin___024root();
    VL_UNCOPYABLE(VFSM_bin___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
