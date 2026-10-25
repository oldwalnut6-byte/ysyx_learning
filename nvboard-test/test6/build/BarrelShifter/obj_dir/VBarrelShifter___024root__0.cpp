// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBarrelShifter.h for the primary calling header

#include "VBarrelShifter__pch.h"

void VBarrelShifter___024root___eval_sample(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_sample\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBarrelShifter___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool VBarrelShifter___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);
extern const VlUnpacked<CData/*7:0*/, 8192> VBarrelShifter__ConstPool__TABLE_h8a4468a6_0;

bool VBarrelShifter___024root___eval_ico(VBarrelShifter___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_ico\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (IData)((IData)(firstIteration)));
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.al) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__al__0)) 
                                                           << 3U) 
                                                          | (((IData)(vlSelfRef.lr) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lr__0)) 
                                                             << 2U)) 
                                                         | ((((IData)(vlSelfRef.shamt) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__shamt__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.din) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__din__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__din__0 = vlSelfRef.din;
        vlSelfRef.__Vtrigprevexpr___TOP__shamt__0 = vlSelfRef.shamt;
        vlSelfRef.__Vtrigprevexpr___TOP__lr__0 = vlSelfRef.lr;
        vlSelfRef.__Vtrigprevexpr___TOP__al__0 = vlSelfRef.al;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBarrelShifter___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = VBarrelShifter___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((0x000000000000000fULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.dout = VBarrelShifter__ConstPool__TABLE_h8a4468a6_0
                        [(((IData)(vlSelfRef.din) << 5U) 
                          | (((IData)(vlSelfRef.shamt) 
                              << 2U) | (((IData)(vlSelfRef.lr) 
                                         << 1U) | (IData)(vlSelfRef.al))))];
                }
            }
        }
    }
    return (__VicoExecute);
}

bool VBarrelShifter___024root___eval_act(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_act\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool VBarrelShifter___024root___eval_inact(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_inact\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool VBarrelShifter___024root___eval_nba(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_nba\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool VBarrelShifter___024root___eval_obs(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_obs\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool VBarrelShifter___024root___eval_react(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_react\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void VBarrelShifter___024root___eval_postponed(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_postponed\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool VBarrelShifter___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

#ifdef VL_DEBUG
void VBarrelShifter___024root___eval_debug_assertions(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_debug_assertions\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.shamt & 0xf8U)))) {
        Verilated::overWidthError("shamt");
    }
    if (VL_UNLIKELY(((vlSelfRef.lr & 0xfeU)))) {
        Verilated::overWidthError("lr");
    }
    if (VL_UNLIKELY(((vlSelfRef.al & 0xfeU)))) {
        Verilated::overWidthError("al");
    }
}
#endif  // VL_DEBUG
