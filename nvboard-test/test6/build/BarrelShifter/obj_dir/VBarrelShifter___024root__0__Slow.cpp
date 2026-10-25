// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBarrelShifter.h for the primary calling header

#include "VBarrelShifter__pch.h"

VL_ATTR_COLD void VBarrelShifter___024root___eval_static(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_static\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__din__0 = vlSelfRef.din;
    vlSelfRef.__Vtrigprevexpr___TOP__shamt__0 = vlSelfRef.shamt;
    vlSelfRef.__Vtrigprevexpr___TOP__lr__0 = vlSelfRef.lr;
    vlSelfRef.__Vtrigprevexpr___TOP__al__0 = vlSelfRef.al;
}

VL_ATTR_COLD void VBarrelShifter___024root___eval_initial(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_initial\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBarrelShifter___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VBarrelShifter___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
extern const VlUnpacked<CData/*7:0*/, 8192> VBarrelShifter__ConstPool__TABLE_h8a4468a6_0;

VL_ATTR_COLD bool VBarrelShifter___024root___eval_stl(VBarrelShifter___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_stl\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBarrelShifter___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VBarrelShifter___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
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
    return (__VstlExecute);
}

VL_ATTR_COLD void VBarrelShifter___024root___eval_dump_triggers__stl(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_dump_triggers__stl\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VBarrelShifter___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBarrelShifter___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void VBarrelShifter___024root___eval_dump_triggers__ico(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_dump_triggers__ico\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VBarrelShifter___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

VL_ATTR_COLD void VBarrelShifter___024root___eval_dump_triggers__act(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_dump_triggers__act\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VBarrelShifter___024root___eval_dump_triggers__nba(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_dump_triggers__nba\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VBarrelShifter___024root___eval_dump_triggers__obs(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_dump_triggers__obs\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VBarrelShifter___024root___eval_dump_triggers__react(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_dump_triggers__react\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VBarrelShifter___024root___eval_final(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_final\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBarrelShifter___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VBarrelShifter___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VBarrelShifter___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___trigger_anySet__stl\n"); );
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

bool VBarrelShifter___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VBarrelShifter___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VBarrelShifter___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( din)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( shamt)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( lr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( al)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VBarrelShifter___024root___ctor_var_reset(VBarrelShifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___ctor_var_reset\n"); );
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15192908731043726583ull);
    vlSelf->shamt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1053237437445446959ull);
    vlSelf->lr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2919978968283337964ull);
    vlSelf->al = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18424198207506585486ull);
    vlSelf->dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11474705599699299244ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__din__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__shamt__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__lr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__al__0 = 0;
    vlSelf->__VicoDidInit = 0;
}
