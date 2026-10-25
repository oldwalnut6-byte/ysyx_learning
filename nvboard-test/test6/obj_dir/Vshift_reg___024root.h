// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshift_reg.h for the primary calling header

#ifndef VERILATED_VSHIFT_REG___024ROOT_H_
#define VERILATED_VSHIFT_REG___024ROOT_H_  // guard

#include "verilated.h"


class Vshift_reg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vshift_reg___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(mode,2,0);
    VL_IN8(din,7,0);
    VL_IN8(serial_in,0,0);
    VL_OUT8(dout,7,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__mode__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__din__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__serial_in__0;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vshift_reg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vshift_reg___024root(Vshift_reg__Syms* symsp, const char* namep);
    ~Vshift_reg___024root();
    VL_UNCOPYABLE(Vshift_reg___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
