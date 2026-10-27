// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_sample(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_sample\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_ico(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (IData)((IData)(firstIteration)));
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.ps2_data) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ps2_data__0)) 
                                                           << 3U) 
                                                          | (((IData)(vlSelfRef.ps2_clk) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ps2_clk__0)) 
                                                             << 2U)) 
                                                         | ((((IData)(vlSelfRef.rst) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.clk) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
        vlSelfRef.__Vtrigprevexpr___TOP__ps2_clk__0 
            = vlSelfRef.ps2_clk;
        vlSelfRef.__Vtrigprevexpr___TOP__ps2_data__0 
            = vlSelfRef.ps2_data;
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
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vtop___024root___eval_inact(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_inact\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtop___024root___eval_obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___eval_react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtop___024root___eval_postponed(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_postponed\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
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

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
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

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_he06fe348_0;

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__top__DOT__u_keyboard__DOT__ps2_clk_sync;
    __Vdly__top__DOT__u_keyboard__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__top__DOT__u_keyboard__DOT__count;
    __Vdly__top__DOT__u_keyboard__DOT__count = 0;
    CData/*2:0*/ __Vdly__top__DOT__u_keyboard__DOT__w_ptr;
    __Vdly__top__DOT__u_keyboard__DOT__w_ptr = 0;
    CData/*2:0*/ __Vdly__top__DOT__u_keyboard__DOT__r_ptr;
    __Vdly__top__DOT__u_keyboard__DOT__r_ptr = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_keyboard__DOT__overflow;
    __Vdly__top__DOT__u_keyboard__DOT__overflow = 0;
    CData/*0:0*/ __Vdly__top__DOT__ready;
    __Vdly__top__DOT__ready = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__u_keyboard__DOT__fifo__v0;
    __VdlyVal__top__DOT__u_keyboard__DOT__fifo__v0 = 0;
    CData/*2:0*/ __VdlyDim0__top__DOT__u_keyboard__DOT__fifo__v0;
    __VdlyDim0__top__DOT__u_keyboard__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__u_keyboard__DOT__fifo__v0;
    __VdlySet__top__DOT__u_keyboard__DOT__fifo__v0 = 0;
    // Body
    __Vdly__top__DOT__u_keyboard__DOT__ps2_clk_sync 
        = vlSelfRef.top__DOT__u_keyboard__DOT__ps2_clk_sync;
    __Vdly__top__DOT__u_keyboard__DOT__count = vlSelfRef.top__DOT__u_keyboard__DOT__count;
    __Vdly__top__DOT__u_keyboard__DOT__w_ptr = vlSelfRef.top__DOT__u_keyboard__DOT__w_ptr;
    __Vdly__top__DOT__u_keyboard__DOT__overflow = vlSelfRef.top__DOT__u_keyboard__DOT__overflow;
    __Vdly__top__DOT__ready = vlSelfRef.top__DOT__ready;
    __Vdly__top__DOT__u_keyboard__DOT__r_ptr = vlSelfRef.top__DOT__u_keyboard__DOT__r_ptr;
    __VdlySet__top__DOT__u_keyboard__DOT__fifo__v0 = 0U;
    __Vdly__top__DOT__u_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelfRef.top__DOT__u_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelfRef.ps2_clk));
    if (vlSelfRef.rst) {
        __Vdly__top__DOT__u_keyboard__DOT__count = 0U;
        __Vdly__top__DOT__u_keyboard__DOT__w_ptr = 0U;
        __Vdly__top__DOT__u_keyboard__DOT__r_ptr = 0U;
        __Vdly__top__DOT__u_keyboard__DOT__overflow = 0U;
        __Vdly__top__DOT__ready = 0U;
    } else {
        if (vlSelfRef.top__DOT__ready) {
            __Vdly__top__DOT__u_keyboard__DOT__r_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_keyboard__DOT__r_ptr)));
            if (((IData)(vlSelfRef.top__DOT__u_keyboard__DOT__w_ptr) 
                 == (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_keyboard__DOT__r_ptr))))) {
                __Vdly__top__DOT__ready = 0U;
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelfRef.top__DOT__u_keyboard__DOT__ps2_clk_sync))))) {
            if ((0x0aU == (IData)(vlSelfRef.top__DOT__u_keyboard__DOT__count))) {
                if ((((~ (IData)(vlSelfRef.top__DOT__u_keyboard__DOT__buffer)) 
                      & (IData)(vlSelfRef.ps2_data)) 
                     & VL_REDXOR_32((0x000001ffU & 
                                     ((IData)(vlSelfRef.top__DOT__u_keyboard__DOT__buffer) 
                                      >> 1U))))) {
                    __VdlyVal__top__DOT__u_keyboard__DOT__fifo__v0 
                        = (0x000000ffU & ((IData)(vlSelfRef.top__DOT__u_keyboard__DOT__buffer) 
                                          >> 1U));
                    __VdlyDim0__top__DOT__u_keyboard__DOT__fifo__v0 
                        = vlSelfRef.top__DOT__u_keyboard__DOT__w_ptr;
                    __VdlySet__top__DOT__u_keyboard__DOT__fifo__v0 = 1U;
                    __Vdly__top__DOT__ready = 1U;
                    __Vdly__top__DOT__u_keyboard__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_keyboard__DOT__w_ptr)));
                    __Vdly__top__DOT__u_keyboard__DOT__overflow 
                        = ((IData)(vlSelfRef.top__DOT__u_keyboard__DOT__overflow) 
                           | ((IData)(vlSelfRef.top__DOT__u_keyboard__DOT__r_ptr) 
                              == (7U & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_keyboard__DOT__w_ptr)))));
                }
                __Vdly__top__DOT__u_keyboard__DOT__count = 0U;
            } else {
                if ((9U >= (IData)(vlSelfRef.top__DOT__u_keyboard__DOT__count))) {
                    vlSelfRef.top__DOT__u_keyboard__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.top__DOT__u_keyboard__DOT__count))) 
                            & (IData)(vlSelfRef.top__DOT__u_keyboard__DOT__buffer)) 
                           | (0x03ffU & ((IData)(vlSelfRef.ps2_data) 
                                         << (IData)(vlSelfRef.top__DOT__u_keyboard__DOT__count))));
                }
                __Vdly__top__DOT__u_keyboard__DOT__count 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_keyboard__DOT__count)));
            }
        }
    }
    vlSelfRef.top__DOT__u_keyboard__DOT__count = __Vdly__top__DOT__u_keyboard__DOT__count;
    vlSelfRef.top__DOT__u_keyboard__DOT__w_ptr = __Vdly__top__DOT__u_keyboard__DOT__w_ptr;
    vlSelfRef.top__DOT__u_keyboard__DOT__overflow = __Vdly__top__DOT__u_keyboard__DOT__overflow;
    vlSelfRef.top__DOT__ready = __Vdly__top__DOT__ready;
    vlSelfRef.top__DOT__u_keyboard__DOT__ps2_clk_sync 
        = __Vdly__top__DOT__u_keyboard__DOT__ps2_clk_sync;
    vlSelfRef.top__DOT__u_keyboard__DOT__r_ptr = __Vdly__top__DOT__u_keyboard__DOT__r_ptr;
    if (__VdlySet__top__DOT__u_keyboard__DOT__fifo__v0) {
        vlSelfRef.top__DOT__u_keyboard__DOT__fifo[__VdlyDim0__top__DOT__u_keyboard__DOT__fifo__v0] 
            = __VdlyVal__top__DOT__u_keyboard__DOT__fifo__v0;
    }
    vlSelfRef.o_seg1 = (0x000000ffU & Vtop__ConstPool__CONST_he06fe348_0
                        [(0x0000000fU & vlSelfRef.top__DOT__u_keyboard__DOT__fifo
                          [vlSelfRef.top__DOT__u_keyboard__DOT__r_ptr])]);
    vlSelfRef.o_seg2 = (0x000000ffU & Vtop__ConstPool__CONST_he06fe348_0
                        [(0x0000000fU & (vlSelfRef.top__DOT__u_keyboard__DOT__fifo
                                         [vlSelfRef.top__DOT__u_keyboard__DOT__r_ptr] 
                                         >> 4U))]);
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
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
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.ps2_clk & 0xfeU)))) {
        Verilated::overWidthError("ps2_clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.ps2_data & 0xfeU)))) {
        Verilated::overWidthError("ps2_data");
    }
}
#endif  // VL_DEBUG
