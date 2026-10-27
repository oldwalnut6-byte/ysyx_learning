// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_bin.h for the primary calling header

#include "VFSM_bin__pch.h"

VL_ATTR_COLD void VFSM_bin___024root___eval_static(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_static\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__in__0 = vlSelfRef.in;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
}

VL_ATTR_COLD void VFSM_bin___024root___eval_initial(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_initial\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VFSM_bin___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
extern const VlUnpacked<VlWide<3>/*71:0*/, 2> VFSM_bin__ConstPool__TABLE_ha9a27ec3_0;

VL_ATTR_COLD bool VFSM_bin___024root___eval_stl(VFSM_bin___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_stl\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFSM_bin___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VFSM_bin___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.out = ((8U == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                                     | ((4U == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                                        & ((4U == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                                           | ((7U == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                                              | ((6U 
                                                  == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                                                 | ((5U 
                                                     == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                                                    | ((3U 
                                                        == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                                                       | ((2U 
                                                           == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                                                          | ((0U 
                                                              == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                                                             | (1U 
                                                                == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)))))))))));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                        = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                           == (0x0000000fU & (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                              [vlSelfRef.in][0U] 
                                              >> 4U)));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 
                        = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                           == (0x0000000fU & (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                              [vlSelfRef.in][0U] 
                                              >> 0x0000000cU)));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                        = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                           == (0x0000000fU & (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                              [vlSelfRef.in][0U] 
                                              >> 0x00000014U)));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                        = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                           == (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                               [vlSelfRef.in][0U] >> 0x0000001cU));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                        = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                           == (0x0000000fU & (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                              [vlSelfRef.in][1U] 
                                              >> 4U)));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 
                        = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                           == (0x0000000fU & (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                              [vlSelfRef.in][1U] 
                                              >> 0x0000000cU)));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
                        = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                           == (0x0000000fU & (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                              [vlSelfRef.in][1U] 
                                              >> 0x00000014U)));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                        = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                           == (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                               [vlSelfRef.in][1U] >> 0x0000001cU));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                        = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                           == (0x0000000fU & (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                              [vlSelfRef.in][2U] 
                                              >> 4U)));
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void VFSM_bin___024root___eval_dump_triggers__stl(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_dump_triggers__stl\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VFSM_bin___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void VFSM_bin___024root___eval_dump_triggers__ico(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_dump_triggers__ico\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VFSM_bin___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void VFSM_bin___024root___eval_dump_triggers__act(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_dump_triggers__act\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VFSM_bin___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void VFSM_bin___024root___eval_dump_triggers__nba(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_dump_triggers__nba\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VFSM_bin___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void VFSM_bin___024root___eval_dump_triggers__obs(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_dump_triggers__obs\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VFSM_bin___024root___eval_dump_triggers__react(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_dump_triggers__react\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VFSM_bin___024root___eval_final(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_final\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VFSM_bin___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VFSM_bin___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___trigger_anySet__stl\n"); );
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

bool VFSM_bin___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VFSM_bin___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( in)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( reset)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool VFSM_bin___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VFSM_bin___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFSM_bin___024root___ctor_var_reset(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___ctor_var_reset\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5406812645801907143ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7519490245117619040ull);
    vlSelf->FSM_bin__DOT__state_dout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12060854815797500419ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__in__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
