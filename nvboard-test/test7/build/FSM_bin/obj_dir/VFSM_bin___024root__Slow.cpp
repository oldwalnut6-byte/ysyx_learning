// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_bin.h for the primary calling header

#include "VFSM_bin__pch.h"

void VFSM_bin___024root___ctor_var_reset(VFSM_bin___024root* vlSelf);

VFSM_bin___024root::VFSM_bin___024root(VFSM_bin__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VFSM_bin___024root___ctor_var_reset(this);
}

void VFSM_bin___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VFSM_bin___024root::~VFSM_bin___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
