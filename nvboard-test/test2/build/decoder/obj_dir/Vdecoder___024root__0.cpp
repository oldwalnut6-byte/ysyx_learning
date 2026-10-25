// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder.h for the primary calling header

#include "Vdecoder__pch.h"

void Vdecoder___024root___eval_sample(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_sample\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vdecoder___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

bool Vdecoder___024root___eval_ico(Vdecoder___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_ico\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
                                                        ((((IData)(vlSelfRef.en) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__en__0)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.x) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__x__0 = vlSelfRef.x;
        vlSelfRef.__Vtrigprevexpr___TOP__en__0 = vlSelfRef.en;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecoder___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vdecoder___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((3ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.y = ((IData)(vlSelfRef.en)
                                    ? (0x0000000fU 
                                       & (0x8421U >> 
                                          ((IData)(vlSelfRef.x) 
                                           << 2U)))
                                    : 0U);
                }
            }
        }
    }
    return (__VicoExecute);
}

bool Vdecoder___024root___eval_act(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_act\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdecoder___024root___eval_inact(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_inact\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdecoder___024root___eval_nba(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_nba\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdecoder___024root___eval_obs(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_obs\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdecoder___024root___eval_react(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_react\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vdecoder___024root___eval_postponed(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_postponed\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vdecoder___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___trigger_anySet__ico\n"); );
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
void Vdecoder___024root___eval_debug_assertions(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_debug_assertions\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.x & 0xfcU)))) {
        Verilated::overWidthError("x");
    }
    if (VL_UNLIKELY(((vlSelfRef.en & 0xfeU)))) {
        Verilated::overWidthError("en");
    }
}
#endif  // VL_DEBUG
