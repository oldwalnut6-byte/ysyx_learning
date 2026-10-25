// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_reg.h for the primary calling header

#include "Vshift_reg__pch.h"

void Vshift_reg___024root___eval_sample(Vshift_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval_sample\n"); );
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_reg___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vshift_reg___024root___eval_ico(Vshift_reg___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval_ico\n"); );
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (IData)((IData)(firstIteration)));
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.serial_in) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__serial_in__0)) 
                                                          << 4U) 
                                                         | (((((IData)(vlSelfRef.din) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__din__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.mode) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mode__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.rst) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.clk) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
        vlSelfRef.__Vtrigprevexpr___TOP__mode__0 = vlSelfRef.mode;
        vlSelfRef.__Vtrigprevexpr___TOP__din__0 = vlSelfRef.din;
        vlSelfRef.__Vtrigprevexpr___TOP__serial_in__0 
            = vlSelfRef.serial_in;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vshift_reg___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_reg___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vshift_reg___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vshift_reg___024root___eval_act(Vshift_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval_act\n"); );
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vshift_reg___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vshift_reg___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vshift_reg___024root___eval_inact(Vshift_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval_inact\n"); );
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vshift_reg___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vshift_reg___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vshift_reg___024root___eval_nba(Vshift_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval_nba\n"); );
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vshift_reg___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    vlSelfRef.dout = ((IData)(vlSelfRef.rst)
                                       ? 0U : ((4U 
                                                & (IData)(vlSelfRef.mode))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.mode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mode))
                                                     ? 
                                                    ((0x000000feU 
                                                      & ((IData)(vlSelfRef.dout) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.dout) 
                                                           >> 7U)))
                                                     : 
                                                    ((0x00000080U 
                                                      & ((IData)(vlSelfRef.dout) 
                                                         << 7U)) 
                                                     | (0x0000007fU 
                                                        & ((IData)(vlSelfRef.dout) 
                                                           >> 1U))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mode))
                                                     ? 
                                                    (((IData)(vlSelfRef.serial_in) 
                                                      << 7U) 
                                                     | (0x0000007fU 
                                                        & ((IData)(vlSelfRef.dout) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.dout)) 
                                                     | (0x0000007fU 
                                                        & ((IData)(vlSelfRef.dout) 
                                                           >> 1U)))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.mode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mode))
                                                     ? 
                                                    (0x000000feU 
                                                     & ((IData)(vlSelfRef.dout) 
                                                        << 1U))
                                                     : 
                                                    (0x0000007fU 
                                                     & ((IData)(vlSelfRef.dout) 
                                                        >> 1U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mode))
                                                     ? (IData)(vlSelfRef.din)
                                                     : 0U))));
                }
            }
        }
        Vshift_reg___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vshift_reg___024root___eval_obs(Vshift_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval_obs\n"); );
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vshift_reg___024root___eval_react(Vshift_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval_react\n"); );
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vshift_reg___024root___eval_postponed(Vshift_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval_postponed\n"); );
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vshift_reg___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___trigger_anySet__ico\n"); );
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

bool Vshift_reg___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___trigger_anySet__act\n"); );
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

void Vshift_reg___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vshift_reg___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___trigger_clear__act\n"); );
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
void Vshift_reg___024root___eval_debug_assertions(Vshift_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval_debug_assertions\n"); );
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xf8U)))) {
        Verilated::overWidthError("mode");
    }
    if (VL_UNLIKELY(((vlSelfRef.serial_in & 0xfeU)))) {
        Verilated::overWidthError("serial_in");
    }
}
#endif  // VL_DEBUG
