// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrypt_spi_dut.h for the primary calling header

#include "Vcrypt_spi_dut__pch.h"
#include "Vcrypt_spi_dut__Syms.h"
#include "Vcrypt_spi_dut___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrypt_spi_dut___024root___dump_triggers__ico(Vcrypt_spi_dut___024root* vlSelf);
#endif  // VL_DEBUG

void Vcrypt_spi_dut___024root___eval_triggers__ico(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcrypt_spi_dut___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrypt_spi_dut___024root___dump_triggers__act(Vcrypt_spi_dut___024root* vlSelf);
#endif  // VL_DEBUG

void Vcrypt_spi_dut___024root___eval_triggers__act(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->reset)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0))) 
                                     | ((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__ss__0)))));
    vlSelf->__VactTriggered.set(3U, (((~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0)) 
                                     | ((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__ss__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
    vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck;
    vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__ss__0 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcrypt_spi_dut___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__0(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text = 0;
    QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key = 0;
    // Body
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text;
    vlSelf->__Vdly__debug_state = vlSelf->debug_state;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_prev 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__cmd_reg 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__cmd_reg;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__state;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__done 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__sck 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__mosi 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((4U == (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state))) {
            vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__i = 0x40U;
        }
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done = 1U;
    }
    if (vlSelf->reset) {
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text = 0xdabfULL;
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key = 0ULL;
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_cipher = 0xcad1ULL;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.nonce = 1ULL;
    } else if ((4U == (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state))) {
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = vlSelf->master_data;
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400801ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
            = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
                << 1U) | (QData)((IData)((1U & VL_REDXOR_64(
                                                            (0x8000080200400003ULL 
                                                             & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text))))));
    }
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
        = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key 
        = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key;
    vlSelf->nonce = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.nonce;
    VL_WRITEF("lfsr_cipher generated: 0x%04x , done_signal: %b\n",
              64,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_cipher,
              1,(IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done));
    vlSelf->crypto_done = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__1(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__block_count 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count;
    if ((0U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__block_count = 0U;
    } else if (((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready) 
                & (4U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state)))) {
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__block_count 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count)));
    }
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__2(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*6:0*/ __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count;
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count = 0;
    QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx;
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx = 0;
    // Body
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx 
        = vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx;
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count 
        = vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count;
    if (vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss) {
        __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count = 0U;
        __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx = 0ULL;
    } else {
        __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx 
            = ((vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx 
                << 1U) | (QData)((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi)));
        __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count)));
        if (VL_UNLIKELY((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count)))) {
            VL_WRITEF("SLAVE: data_received=0x%04x\n",
                      64,vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx);
            __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count = 0U;
        }
    }
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count 
        = __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count;
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx 
        = __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__3(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ __Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev;
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev = 0;
    QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx;
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx = 0;
    // Body
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
        = vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx;
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev 
        = vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__miso 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso;
    if (vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss) {
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__miso = 0U;
        __Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev = 1U;
    } else if (vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev) {
        __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
            = vlSelf->master_data;
        __Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev = 0U;
    } else {
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__miso 
            = (1U & (IData)((vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
                             >> 0x3fU)));
        __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
            = (vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
               << 1U);
    }
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev 
        = __Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev;
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
        = __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__4(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 0U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready = 0U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = 1U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__mosi = 0U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__sck = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__cmd_reg = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_prev = 0U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__done = 0U;
    } else {
        vlSelf->__Vdly__debug_state = vlSelf->crypt_spi_dut__DOT__u_master__DOT__state;
        if ((0U != (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
            if ((0x63ULL == vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div)) {
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__sck 
                    = (1U & (~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck)));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div = 0ULL;
            } else {
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div 
                    = (1ULL + vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div);
            }
        } else {
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__sck = 0U;
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div = 0ULL;
        }
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_prev 
            = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck;
        if ((4U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
            if ((2U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 0U;
            } else if (VL_UNLIKELY((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state)))) {
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = 1U;
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.data_received 
                    = vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx;
                VL_WRITEF("DEBUG DONE: data_received=0x%016x bit_count=%3# mosi=%b, miso=%b, done=%1#\n",
                          64,vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx,
                          7,(IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count),
                          1,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi,
                          1,(IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso),
                          1,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done);
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__done = 1U;
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__mosi = 0U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
                if ((0U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_counter))) {
                    vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_counter = 1U;
                } else {
                    vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_counter = 0U;
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__done = 0U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 0U;
                }
            } else {
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state 
                    = (((IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count) 
                        == ((IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__total_blocks) 
                            - (IData)(1U))) ? 5U : 2U);
            }
        } else if ((2U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
            if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
                if (((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                     & (~ (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev)))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                        = ((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                            << 1U) | (QData)((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso)));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count)));
                }
                if (((~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck)) 
                     & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev))) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__mosi 
                        = (1U & (IData)((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                                         >> 0x3fU)));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                        = (vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                           << 1U);
                }
                if (VL_UNLIKELY((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count)))) {
                    VL_WRITEF("DEBUG DRAIN DONE: data_received=0x%016x\n",
                              64,vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx);
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready = 1U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 5U;
                }
            } else {
                if (VL_UNLIKELY(((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                                 & (~ (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev))))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                        = ((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                            << 1U) | (QData)((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso)));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count)));
                    VL_WRITEF("DEBUG FILL: bit_count=%3#, mosi=%b, miso=%b, sr_rx=0x%016x\n",
                              7,vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count,
                              1,(IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi),
                              1,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso,
                              64,vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx);
                }
                if (((~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck)) 
                     & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev))) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__mosi 
                        = (1U & (IData)((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                                         >> 0x3fU)));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                        = (vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                           << 1U);
                }
                if ((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count))) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready = 1U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 4U;
                }
            }
        } else if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = 0U;
            if (((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                 & (~ (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev)))) {
                if ((7U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
                    if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__cmd_reg))) {
                        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 3U;
                    } else {
                        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                            = vlSelf->master_data;
                        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 2U;
                    }
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__cmd_reg 
                        = (QData)((IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx));
                } else {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count)));
                }
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                    = ((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr 
                        << 1U) | (QData)((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso)));
            }
        } else {
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = 1U;
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__mosi = 0U;
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__done = 0U;
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div = 0ULL;
            if (VL_UNLIKELY(vlSelf->start)) {
                VL_WRITEF("DEBUG (IDLE): sr_rx=0x%016x, debug_state=%b, buffer_sr=x%016x\n",
                          8,(0xffU & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx)),
                          3,(IData)(vlSelf->debug_state),
                          64,vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr);
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr 
                    = vlSelf->master_data;
            }
        }
    }
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__cmd_reg 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__cmd_reg;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_prev;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__state 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state;
    vlSelf->debug_state = vlSelf->__Vdly__debug_state;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__sck;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__done;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__mosi;
    vlSelf->block_ready = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready;
    vlSelf->ss = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss;
    vlSelf->sck = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck;
    vlSelf->done = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done;
    vlSelf->data_received = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.data_received;
    vlSelf->mosi = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__6(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__miso;
    vlSelf->miso = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso;
}
