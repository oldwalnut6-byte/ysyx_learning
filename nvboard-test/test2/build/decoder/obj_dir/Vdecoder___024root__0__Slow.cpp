// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder.h for the primary calling header

#include "Vdecoder__pch.h"

VL_ATTR_COLD void Vdecoder___024root___eval_static(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_static\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__x__0 = vlSelfRef.x;
    vlSelfRef.__Vtrigprevexpr___TOP__en__0 = vlSelfRef.en;
}

VL_ATTR_COLD void Vdecoder___024root___eval_initial(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_initial\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdecoder___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vdecoder___024root___eval_stl(Vdecoder___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_stl\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecoder___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vdecoder___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
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
    return (__VstlExecute);
}

VL_ATTR_COLD void Vdecoder___024root___eval_dump_triggers__stl(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_dump_triggers__stl\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vdecoder___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdecoder___024root___eval_dump_triggers__ico(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_dump_triggers__ico\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vdecoder___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

VL_ATTR_COLD void Vdecoder___024root___eval_dump_triggers__act(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_dump_triggers__act\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdecoder___024root___eval_dump_triggers__nba(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_dump_triggers__nba\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdecoder___024root___eval_dump_triggers__obs(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_dump_triggers__obs\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdecoder___024root___eval_dump_triggers__react(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_dump_triggers__react\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdecoder___024root___eval_final(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_final\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vdecoder___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vdecoder___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vdecoder___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vdecoder___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( x)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( en)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdecoder___024root___ctor_var_reset(Vdecoder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___ctor_var_reset\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->x = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9409450202036847209ull);
    vlSelf->en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710216835639188562ull);
    vlSelf->y = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11123243248953317070ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__x__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__en__0 = 0;
    vlSelf->__VicoDidInit = 0;
}
