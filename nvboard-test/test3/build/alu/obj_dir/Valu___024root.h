// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"


class Valu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(instr,2,0);
    VL_OUT8(alu_result,3,0);
    VL_OUT8(cmp_less,0,0);
    VL_OUT8(cmp_equal,0,0);
    CData/*0:0*/ alu__DOT__sub_en;
    CData/*3:0*/ __Vtrigprevexpr___TOP__a__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__b__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__instr__0;
    CData/*0:0*/ __VicoDidInit;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;

    // INTERNAL VARIABLES
    Valu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Valu___024root(Valu__Syms* symsp, const char* namep);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
