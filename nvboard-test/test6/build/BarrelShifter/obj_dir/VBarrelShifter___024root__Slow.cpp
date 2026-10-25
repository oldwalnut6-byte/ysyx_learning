// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBarrelShifter.h for the primary calling header

#include "VBarrelShifter__pch.h"

void VBarrelShifter___024root___ctor_var_reset(VBarrelShifter___024root* vlSelf);

VBarrelShifter___024root::VBarrelShifter___024root(VBarrelShifter__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VBarrelShifter___024root___ctor_var_reset(this);
}

void VBarrelShifter___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VBarrelShifter___024root::~VBarrelShifter___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
