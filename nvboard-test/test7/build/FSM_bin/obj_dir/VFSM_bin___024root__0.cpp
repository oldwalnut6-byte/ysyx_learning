// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_bin.h for the primary calling header

#include "VFSM_bin__pch.h"

void VFSM_bin___024root___eval_sample(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_sample\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool VFSM_bin___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);
extern const VlUnpacked<VlWide<3>/*71:0*/, 2> VFSM_bin__ConstPool__TABLE_ha9a27ec3_0;

bool VFSM_bin___024root___eval_ico(VFSM_bin___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_ico\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
                                                        ((((IData)(vlSelfRef.reset) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0)) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelfRef.in) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__in__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.clk) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__in__0 = vlSelfRef.in;
        vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFSM_bin___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = VFSM_bin___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
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
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_bin___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void VFSM_bin___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool VFSM_bin___024root___eval_act(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_act\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFSM_bin___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VFSM_bin___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool VFSM_bin___024root___eval_inact(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_inact\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool VFSM_bin___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void VFSM_bin___024root___nba_sequent__TOP__0(VFSM_bin___024root* vlSelf);
void VFSM_bin___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool VFSM_bin___024root___eval_nba(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_nba\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VFSM_bin___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                VFSM_bin___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        VFSM_bin___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool VFSM_bin___024root___eval_obs(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_obs\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool VFSM_bin___024root___eval_react(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_react\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void VFSM_bin___024root___eval_postponed(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_postponed\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool VFSM_bin___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___trigger_anySet__ico\n"); );
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

bool VFSM_bin___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___trigger_anySet__act\n"); );
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

void VFSM_bin___024root___nba_sequent__TOP__0(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___nba_sequent__TOP__0\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.FSM_bin__DOT__state_dout = ((IData)(vlSelfRef.reset)
                                           ? 0U : (0x0000000fU 
                                                   & ((- (IData)(
                                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                                           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                                              | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))))))))))) 
                                                      & (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                                          & VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                          [vlSelfRef.in][0U]) 
                                                         | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) 
                                                             & ((VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                                 [vlSelfRef.in][0U] 
                                                                 << 0x00000018U) 
                                                                | (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                                   [vlSelfRef.in][0U] 
                                                                   >> 8U))) 
                                                            | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))) 
                                                                & ((VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                                    [vlSelfRef.in][0U] 
                                                                    << 0x00000010U) 
                                                                   | (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                                      [vlSelfRef.in][0U] 
                                                                      >> 0x00000010U))) 
                                                               | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))) 
                                                                   & ((VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                                       [vlSelfRef.in][0U] 
                                                                       << 8U) 
                                                                      | (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                                         [vlSelfRef.in][0U] 
                                                                         >> 0x00000018U))) 
                                                                  | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))) 
                                                                      & VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                                      [vlSelfRef.in][1U]) 
                                                                     | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))) 
                                                                         & ((VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                                             [vlSelfRef.in][1U] 
                                                                             << 0x00000018U) 
                                                                            | (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                                               [vlSelfRef.in][1U] 
                                                                               >> 8U))) 
                                                                        | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))) 
                                                                            & ((VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                                                [vlSelfRef.in][1U] 
                                                                                << 0x00000010U) 
                                                                               | (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                                                [vlSelfRef.in][1U] 
                                                                                >> 0x00000010U))) 
                                                                           | (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))) 
                                                                               & VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                                               [vlSelfRef.in][2U]) 
                                                                              | ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))) 
                                                                                & ((VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                                                [vlSelfRef.in][1U] 
                                                                                << 8U) 
                                                                                | (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                                                [vlSelfRef.in][1U] 
                                                                                >> 0x00000018U))))))))))))));
    vlSelfRef.out = ((8U == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                     | ((4U == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                        & ((4U == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                           | ((7U == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                              | ((6U == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                                 | ((5U == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                                    | ((3U == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                                       | ((2U == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                                          | ((0U == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)) 
                                             | (1U 
                                                == (IData)(vlSelfRef.FSM_bin__DOT__state_dout)))))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                                                == 
                                                (0x0000000fU 
                                                 & (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                    [vlSelfRef.in][0U] 
                                                    >> 4U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                                                == 
                                                (0x0000000fU 
                                                 & (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                    [vlSelfRef.in][0U] 
                                                    >> 0x0000000cU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                                                == 
                                                (0x0000000fU 
                                                 & (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                    [vlSelfRef.in][0U] 
                                                    >> 0x00000014U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                                                == 
                                                (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                 [vlSelfRef.in][0U] 
                                                 >> 0x0000001cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                                                == 
                                                (0x0000000fU 
                                                 & (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                    [vlSelfRef.in][1U] 
                                                    >> 4U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                                                == 
                                                (0x0000000fU 
                                                 & (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                    [vlSelfRef.in][1U] 
                                                    >> 0x0000000cU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                                                == 
                                                (0x0000000fU 
                                                 & (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                    [vlSelfRef.in][1U] 
                                                    >> 0x00000014U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                                                == 
                                                (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                 [vlSelfRef.in][1U] 
                                                 >> 0x0000001cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((IData)(vlSelfRef.FSM_bin__DOT__state_dout) 
                                                == 
                                                (0x0000000fU 
                                                 & (VFSM_bin__ConstPool__TABLE_ha9a27ec3_0
                                                    [vlSelfRef.in][2U] 
                                                    >> 4U)));
}

void VFSM_bin___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void VFSM_bin___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void VFSM_bin___024root___eval_debug_assertions(VFSM_bin___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_bin___024root___eval_debug_assertions\n"); );
    VFSM_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.in & 0xfeU)))) {
        Verilated::overWidthError("in");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
