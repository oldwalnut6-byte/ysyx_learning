// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_reg.h for the primary calling header

#include "Vshift_reg__pch.h"

void Vshift_reg___024root___ctor_var_reset(Vshift_reg___024root* vlSelf);

Vshift_reg___024root::Vshift_reg___024root(Vshift_reg__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vshift_reg___024root___ctor_var_reset(this);
}

void Vshift_reg___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vshift_reg___024root::~Vshift_reg___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
