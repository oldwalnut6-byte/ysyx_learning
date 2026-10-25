// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSHIFT_REG__SYMS_H_
#define VERILATED_VSHIFT_REG__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vshift_reg.h"

// INCLUDE MODULE CLASSES
#include "Vshift_reg___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vshift_reg__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vshift_reg* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vshift_reg___024root           TOP;

    // CONSTRUCTORS
    Vshift_reg__Syms(VerilatedContext* contextp, const char* namep, Vshift_reg* modelp);
    ~Vshift_reg__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
