// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecoder.h for the primary calling header

#ifndef VERILATED_VDECODER___024ROOT_H_
#define VERILATED_VDECODER___024ROOT_H_  // guard

#include "verilated.h"


class Vdecoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdecoder___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(x,1,0);
    VL_IN8(en,0,0);
    VL_OUT8(y,3,0);
    CData/*1:0*/ __Vtrigprevexpr___TOP__x__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__en__0;
    CData/*0:0*/ __VicoDidInit;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;

    // INTERNAL VARIABLES
    Vdecoder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdecoder___024root(Vdecoder__Syms* symsp, const char* namep);
    ~Vdecoder___024root();
    VL_UNCOPYABLE(Vdecoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
