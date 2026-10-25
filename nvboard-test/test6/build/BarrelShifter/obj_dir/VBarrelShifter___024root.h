// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBarrelShifter.h for the primary calling header

#ifndef VERILATED_VBARRELSHIFTER___024ROOT_H_
#define VERILATED_VBARRELSHIFTER___024ROOT_H_  // guard

#include "verilated.h"


class VBarrelShifter__Syms;

class alignas(VL_CACHE_LINE_BYTES) VBarrelShifter___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(din,7,0);
    VL_IN8(shamt,2,0);
    VL_IN8(lr,0,0);
    VL_IN8(al,0,0);
    VL_OUT8(dout,7,0);
    CData/*7:0*/ __Vtrigprevexpr___TOP__din__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__shamt__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__lr__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__al__0;
    CData/*0:0*/ __VicoDidInit;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;

    // INTERNAL VARIABLES
    VBarrelShifter__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VBarrelShifter___024root(VBarrelShifter__Syms* symsp, const char* namep);
    ~VBarrelShifter___024root();
    VL_UNCOPYABLE(VBarrelShifter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
