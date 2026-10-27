// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(o_seg1,7,0);
    VL_OUT8(o_seg2,7,0);
    CData/*0:0*/ top__DOT__ready;
    CData/*0:0*/ top__DOT__u_keyboard__DOT__overflow;
    CData/*2:0*/ top__DOT__u_keyboard__DOT__w_ptr;
    CData/*2:0*/ top__DOT__u_keyboard__DOT__r_ptr;
    CData/*3:0*/ top__DOT__u_keyboard__DOT__count;
    CData/*2:0*/ top__DOT__u_keyboard__DOT__ps2_clk_sync;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ps2_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ps2_data__0;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
    SData/*9:0*/ top__DOT__u_keyboard__DOT__buffer;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__u_keyboard__DOT__fifo;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
