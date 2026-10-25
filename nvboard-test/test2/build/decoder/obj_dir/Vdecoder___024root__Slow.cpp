// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder.h for the primary calling header

#include "Vdecoder__pch.h"

void Vdecoder___024root___ctor_var_reset(Vdecoder___024root* vlSelf);

Vdecoder___024root::Vdecoder___024root(Vdecoder__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vdecoder___024root___ctor_var_reset(this);
}

void Vdecoder___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdecoder___024root::~Vdecoder___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
