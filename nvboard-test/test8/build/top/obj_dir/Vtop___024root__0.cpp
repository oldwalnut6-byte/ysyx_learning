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
                                                        ((((IData)(vlSelfRef.rst) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
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
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    CData/*0:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__h_valid;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__h_valid = 0;
                    CData/*0:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__v_valid;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__v_valid = 0;
                    SData/*9:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = 0;
                    SData/*9:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = 0;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt 
                        = vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt 
                        = vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt;
                    if (vlSelfRef.rst) {
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = 1U;
                    } else if ((0x0320U == (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt))) {
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt 
                            = ((0x020dU == (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt))
                                ? 1U : (0x000003ffU 
                                        & ((IData)(1U) 
                                           + (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt))));
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
                    } else {
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt 
                            = (0x000003ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt)));
                    }
                    vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt 
                        = __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
                    vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt 
                        = __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
                    vlSelfRef.VGA_HSYNC = (0x0060U 
                                           < (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt));
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__h_valid 
                        = ((0x0090U < (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                           & (0x0310U >= (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt)));
                    vlSelfRef.VGA_VSYNC = (2U < (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt));
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__v_valid 
                        = ((0x0023U < (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                           & (0x0203U >= (IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt)));
                    vlSelfRef.VGA_BLANK_N = (__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__h_valid 
                                             & __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__v_valid);
                    vlSelfRef.VGA_R = (0x000000ffU 
                                       & (vlSelfRef.top__DOT__my_vmem__DOT__vga_mem
                                          [((0x0007fe00U 
                                             & ((((IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                                  - (IData)(0x0091U)) 
                                                 & (- (IData)(__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__h_valid))) 
                                                << 9U)) 
                                            | (0x000001ffU 
                                               & (((IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                                   - (IData)(0x0024U)) 
                                                  & (- (IData)(__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__v_valid)))))] 
                                          >> 0x00000010U));
                    vlSelfRef.VGA_G = (0x000000ffU 
                                       & (vlSelfRef.top__DOT__my_vmem__DOT__vga_mem
                                          [((0x0007fe00U 
                                             & ((((IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                                  - (IData)(0x0091U)) 
                                                 & (- (IData)(__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__h_valid))) 
                                                << 9U)) 
                                            | (0x000001ffU 
                                               & (((IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                                   - (IData)(0x0024U)) 
                                                  & (- (IData)(__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__v_valid)))))] 
                                          >> 8U));
                    vlSelfRef.VGA_B = (0x000000ffU 
                                       & vlSelfRef.top__DOT__my_vmem__DOT__vga_mem
                                       [((0x0007fe00U 
                                          & ((((IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                               - (IData)(0x0091U)) 
                                              & (- (IData)(__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__h_valid))) 
                                             << 9U)) 
                                         | (0x000001ffU 
                                            & (((IData)(vlSelfRef.top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                                - (IData)(0x0024U)) 
                                               & (- (IData)(__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0_top__DOT__my_vga_ctrl__DOT__v_valid)))))]);
                }
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
}
#endif  // VL_DEBUG
