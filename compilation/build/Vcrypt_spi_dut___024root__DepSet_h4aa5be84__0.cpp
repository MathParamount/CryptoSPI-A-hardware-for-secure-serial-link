// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrypt_spi_dut.h for the primary calling header

#include "Vcrypt_spi_dut__pch.h"
#include "Vcrypt_spi_dut__Syms.h"
#include "Vcrypt_spi_dut___024root.h"

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
                                     | ((~ (IData)(vlSelf->reset_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset_n__0))));
    vlSelf->__VactTriggered.set(2U, (((~ (IData)(vlSelf->reset_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset_n__0)) 
                                     | ((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0)))));
    vlSelf->__VactTriggered.set(3U, (((~ (IData)(vlSelf->reset_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset_n__0)) 
                                     | ((~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset_n__0 = vlSelf->reset_n;
    vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcrypt_spi_dut___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__1(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*6:0*/ __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count;
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count = 0;
    QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx;
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx = 0;
    // Body
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev 
        = vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev;
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx 
        = vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx;
    __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count 
        = vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count;
    if (VL_UNLIKELY(vlSelf->reset_n)) {
        if ((((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss) 
              & (~ (IData)(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev))) 
             & (0U < (IData)(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count)))) {
            __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count = 0U;
            __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx = 0ULL;
        } else if ((1U & (~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss)))) {
            __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx 
                = ((vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx 
                    << 1U) | (QData)((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted)));
            __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count)));
            if (VL_UNLIKELY((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count)))) {
                VL_WRITEF("[SLAVE]: ciphertext = 0x%016x\n",
                          64,vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx);
            }
        }
        VL_WRITEF("[SLAVE]: mosi_encrypted = %1#, bit_count = %3#, ss=%b\n",
                  1,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted,
                  7,(IData)(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count),
                  1,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss);
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev 
            = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss;
    } else {
        __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count = 0U;
        __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev = 1U;
    }
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count 
        = __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count;
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx 
        = __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__2(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*2:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 0;
    IData/*31:0*/ __Vilp;
    IData/*31:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__y;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__y = 0;
    IData/*31:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__x;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__x = 0;
    IData/*31:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol1;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol1 = 0;
    IData/*31:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol8;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol8 = 0;
    IData/*31:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol2;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol2 = 0;
    CData/*5:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__count_round;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__count_round = 0;
    CData/*5:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0 = 0;
    CData/*0:0*/ __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0;
    __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0 = 0;
    IData/*31:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__ys;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__ys = 0;
    IData/*31:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__xs;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__xs = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v1;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v1 = 0;
    CData/*0:0*/ __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v1;
    __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v1 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v2;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v2 = 0;
    IData/*31:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp = 0;
    CData/*5:0*/ __Vdlyvdim0__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3;
    __Vdlyvdim0__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3 = 0;
    CData/*0:0*/ __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3;
    __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3 = 0;
    IData/*31:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__x_new;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__x_new = 0;
    QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m = 0;
    QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s = 0;
    CData/*5:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encypt_count;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encypt_count = 0;
    QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg = 0;
    QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx = 0;
    CData/*0:0*/ __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v4;
    __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v4 = 0;
    CData/*0:0*/ __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v5;
    __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v5 = 0;
    QData/*63:0*/ TOP__crypt_spi_dut__DOT__spi_if__DOT____Vdly__plaintext;
    TOP__crypt_spi_dut__DOT__spi_if__DOT____Vdly__plaintext = 0;
    // Body
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__ss_delay 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__ss_delay;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__state;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_prev 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__sck 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encypt_count 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__x_new 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__x_new;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__xs = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__ys = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__count_round 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol2 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol2;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol8 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol8;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol1 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol1;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__x = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__x;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__y = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__y;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr;
    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__miso_encrypted 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted;
    TOP__crypt_spi_dut__DOT__spi_if__DOT____Vdly__plaintext 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__crypto_done 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done;
    __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0 = 0U;
    __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v1 = 0U;
    __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3 = 0U;
    __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v4 = 0U;
    __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v5 = 0U;
    if (vlSelf->reset_n) {
        vlSelf->debug_state_crypt = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_mast;
        if ((4U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
            if ((2U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
                if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 0U;
                } else if (vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_ack) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__crypto_done = 0U;
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 0U;
                }
            } else if (VL_UNLIKELY((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr)))) {
                if ((0U == (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round))) {
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__y 
                        = (IData)((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
                                   >> 0x20U));
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__x 
                        = (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx);
                } else if ((0x2aU > (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round))) {
                    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk2__DOT__r 
                        = ((IData)(0x2aU) - (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round));
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol1 
                        = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__y 
                            << 1U) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__y 
                                      >> 0x1fU));
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol8 
                        = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__y 
                            << 4U) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__y 
                                      >> 0x1cU));
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol2 
                        = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__y 
                            << 2U) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__y 
                                      >> 0x1eU));
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__y 
                        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__f_x;
                    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__f_x 
                        = (((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__x 
                             ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol1 
                                & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol8)) 
                            ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol2) 
                           ^ ((0x29U >= (0x3fU & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk2__DOT__r))
                               ? vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                              [(0x3fU & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk2__DOT__r)]
                               : vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d93fe75__6));
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__count_round 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round)));
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__x 
                        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__y;
                }
                VL_WRITEF("\n[CRYPTO DECRYPT] Post simon decription: 0x%016x\n",
                          64,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__Post_SMplaintext);
                TOP__crypt_spi_dut__DOT__spi_if__DOT____Vdly__plaintext 
                    = ((IData)(vlSelf->is_write) ? 
                       (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__Post_SMplaintext 
                        ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m)
                        : (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__Post_SMplaintext 
                           ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s));
                VL_WRITEF("\n[CRYPTO DECRYPT] Plaintext from master: 0x%016x\n",
                          64,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext);
                __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 4U;
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__Post_SMplaintext 
                    = (((QData)((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__y)) 
                        << 0x20U) | (QData)((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__x)));
            } else {
                if (VL_UNLIKELY(vlSelf->is_write)) {
                    VL_WRITEF("[TRANSMISSION]: mosi_encrypted: %1#\n",
                              1,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted);
                    if (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__decrpt_signal) {
                        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted 
                            = (1U & (IData)((vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext 
                                             >> (0x3fU 
                                                 & ((IData)(0x3fU) 
                                                    - (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt))))));
                        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__miso_encrypted = 0U;
                    } else {
                        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted 
                            = (1U & (IData)((vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ciphertext 
                                             >> (0x3fU 
                                                 & ((IData)(0x3fU) 
                                                    - (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt))))));
                        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__miso_encrypted = 0U;
                    }
                } else if (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__decrpt_signal) {
                    VL_WRITEF("[CRYPTO_DECRYP] send bit[%0#]= %b\n",
                              6,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt,
                              1,(1U & (IData)((vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ciphertext 
                                               >> (0x3fU 
                                                   & ((IData)(0x3fU) 
                                                      - (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt)))))));
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__miso_encrypted 
                        = (1U & (IData)((vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext 
                                         >> (0x3fU 
                                             & ((IData)(0x3fU) 
                                                - (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt))))));
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted = 0U;
                } else {
                    VL_WRITEF("[CRYPTO_NON_DECRYP] send bit[%0#]= %b\n",
                              6,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt,
                              1,(1U & (IData)((vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ciphertext 
                                               >> (0x3fU 
                                                   & ((IData)(0x3fU) 
                                                      - (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt)))))));
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__miso_encrypted 
                        = (1U & (IData)((vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ciphertext 
                                         >> (0x3fU 
                                             & ((IData)(0x3fU) 
                                                - (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt))))));
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted = 0U;
                }
                __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt)));
                if (VL_UNLIKELY((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt)))) {
                    VL_WRITEF("(data encrypted = 0x%016x)\n",
                              64,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ciphertext);
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__crypto_done = 1U;
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt = 0U;
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 6U;
                }
            }
        } else if ((2U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
            if (VL_UNLIKELY((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr)))) {
                if ((0U == (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round))) {
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__count_round 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round)));
                    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0 
                        = (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m);
                    __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0 = 1U;
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__ys 
                        = (IData)((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg 
                                   >> 0x20U));
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__xs 
                        = (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg);
                    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v1 
                        = (IData)((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m 
                                   >> 0x20U));
                    __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v1 = 1U;
                    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v2 
                        = (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m);
                }
                VL_WRITEF("[SIMON] count_round=%2#, xs=0x%08x, ys=0x%08x\n",
                          6,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round,
                          32,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs,
                          32,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys);
                if ((0x2aU > (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round))) {
                    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx 
                        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round;
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                        = ((((0x29U >= (0x3fU & ((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx) 
                                                 - (IData)(1U))))
                              ? vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [(0x3fU & ((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx) 
                                        - (IData)(1U)))]
                              : vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d93fe75__0) 
                            << 0x1dU) | (((0x29U >= 
                                           (0x3fU & 
                                            ((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx) 
                                             - (IData)(1U))))
                                           ? vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                          [(0x3fU & 
                                            ((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx) 
                                             - (IData)(1U)))]
                                           : vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d93fe75__1) 
                                         >> 3U));
                    if ((0U == (1U & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx))))) {
                        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                            = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                               ^ ((((0x29U >= (0x3fU 
                                               & ((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx) 
                                                  - (IData)(1U))))
                                     ? vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                    [(0x3fU & ((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx) 
                                               - (IData)(1U)))]
                                     : vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d93fe75__2) 
                                   << 0x1cU) | (((0x29U 
                                                  >= 
                                                  (0x3fU 
                                                   & ((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                                 [(0x3fU 
                                                   & ((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx) 
                                                      - (IData)(1U)))]
                                                  : vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d93fe75__3) 
                                                >> 4U)));
                    }
                    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h6c53c1e8__0 
                        = ((((0x29U >= (0x3fU & ((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx) 
                                                 - (IData)(1U))))
                              ? vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [(0x3fU & ((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx) 
                                        - (IData)(1U)))]
                              : vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d93fe75__4) 
                            ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp) 
                           ^ (1U & ((0x29U >= (0x3fU 
                                               & ((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx) 
                                                  - (IData)(1U))))
                                     ? (IData)((0x1b64db64db6ULL 
                                                >> 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx) 
                                                    - (IData)(1U)))))
                                     : (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d96565c__0))));
                    if ((0x29U >= (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx))))) {
                        __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3 
                            = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h6c53c1e8__0;
                        __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3 = 1U;
                        __Vdlyvdim0__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__idx)));
                    }
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__count_round 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round)));
                }
                __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol1 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs 
                        << 1U) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs 
                                  >> 0x1fU));
                __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol8 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs 
                        << 4U) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs 
                                  >> 0x1cU));
                __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol2 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs 
                        << 2U) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs 
                                  >> 0x1eU));
                __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__x_new 
                    = (((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys 
                         ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol1 
                            & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol8)) 
                        ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol2) 
                       ^ ((0x29U >= (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round))
                           ? vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                          [vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round]
                           : vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d93fe75__5));
                VL_WRITEF("x_new_size:          32\n");
                __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__xs 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys;
                __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__ys 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__x_new;
                __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__count_round 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round)));
                if (VL_UNLIKELY((0x2aU == (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round)))) {
                    VL_WRITEF("[SIMON] Final: ciphertext: 0x%016x , ciphertext_size:          64\n",
                              64,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ciphertext);
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__count_round = 0U;
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 4U;
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ciphertext 
                        = (((QData)((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys)) 
                            << 0x20U) | (QData)((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs)));
                }
            } else {
                __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m 
                        << 1U) | (QData)((IData)((1U 
                                                  & VL_REDXOR_64(
                                                                 (0x8000080200400402ULL 
                                                                  & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m))))));
                __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s 
                        << 1U) | (QData)((IData)((1U 
                                                  & VL_REDXOR_64(
                                                                 (0x8000080200400402ULL 
                                                                  & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s))))));
                __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encypt_count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count)));
                if (VL_UNLIKELY((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count)))) {
                    VL_WRITEF("[ENCRYPT] encrypt_text_reg = 0x%016x\n",
                              64,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg);
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encypt_count = 0U;
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 3U;
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg 
                        = ((IData)(vlSelf->is_write)
                            ? (vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext 
                               ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m)
                            : (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
                               ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s));
                }
            }
        } else if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss)))) {
                if (((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                     & (~ (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__sck_prev)))) {
                    TOP__crypt_spi_dut__DOT__spi_if__DOT____Vdly__plaintext 
                        = ((vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext 
                            << 1U) | (QData)((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi)));
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt)));
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
                        = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
                            << 1U) | (QData)((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso)));
                }
                if (VL_UNLIKELY((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt)))) {
                    VL_WRITEF("[CRYPTO RECEPTION] is_write: %1#, plain_text: 0x%016x, slaver_rx: 0x%016x, encrypt_text_reg: 0x%016x\n",
                              1,vlSelf->is_write,64,
                              vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext,
                              64,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx,
                              64,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg);
                    __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt = 0U;
                    if (vlSelf->is_write) {
                        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 2U;
                        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__decrpt_signal = 0U;
                    } else {
                        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 5U;
                        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__decrpt_signal = 1U;
                    }
                }
            }
        } else {
            __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt = 0U;
            if ((1U & (~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss)))) {
                __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 1U;
            }
        }
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__sck_prev 
            = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck;
    } else {
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx = 0ULL;
        TOP__crypt_spi_dut__DOT__spi_if__DOT____Vdly__plaintext = 0ULL;
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 0U;
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_mast = 0U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__crypto_done = 0U;
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt = 0U;
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m = 1ULL;
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s = 0x8000000000000000ULL;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ciphertext = 0ULL;
        __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v4 = 1U;
        __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp = 0U;
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__sck_prev = 0U;
        __Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v5 = 1U;
    }
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr 
        = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__y = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__y;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__x = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__x;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol1 
        = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol1;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol8 
        = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol8;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol2 
        = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__rol2;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round 
        = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__count_round;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt 
        = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__ys;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__xs;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
        = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__x_new 
        = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__x_new;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m 
        = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s 
        = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count 
        = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encypt_count;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
        = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext 
        = TOP__crypt_spi_dut__DOT__spi_if__DOT____Vdly__plaintext;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg 
        = __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg;
    if (__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0;
    }
    if (__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v1) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[1U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v1;
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[2U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v2;
    }
    if (__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[__Vdlyvdim0__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3;
    }
    if (__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v4) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0U] = 0U;
    }
    if (__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v5) {
        __Vilp = 1U;
        while ((__Vilp <= 0x29U)) {
            vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->plaintext = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext;
    vlSelf->mosi_encrypted = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted;
    vlSelf->ciphertext = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ciphertext;
    vlSelf->encrypt_text = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__3(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__3\n"); );
    // Init
    SData/*15:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__block_count;
    __Vdly__crypt_spi_dut__DOT__u_master__DOT__block_count = 0;
    // Body
    __Vdly__crypt_spi_dut__DOT__u_master__DOT__block_count 
        = vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count;
    if ((0U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
        __Vdly__crypt_spi_dut__DOT__u_master__DOT__block_count = 0U;
    } else if (VL_UNLIKELY((((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready) 
                             & (4U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) 
                            & ((IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count) 
                               < ((IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__total_blocks) 
                                  - (IData)(1U)))))) {
        __Vdly__crypt_spi_dut__DOT__u_master__DOT__block_count 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count)));
        VL_WRITEF("block_count  value: %5#\n",16,vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count);
    }
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count 
        = __Vdly__crypt_spi_dut__DOT__u_master__DOT__block_count;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__4(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->reset_n) {
        if (vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss) {
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso = 0U;
        } else if (vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev) {
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
                = vlSelf->master_data;
        } else {
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso 
                = (1U & (IData)((vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
                                 >> 0x3fU)));
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
                = (vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
                   << 1U);
        }
    } else {
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso = 0U;
    }
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx;
    vlSelf->miso = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__5(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->reset_n) {
        vlSelf->debug_state = vlSelf->crypt_spi_dut__DOT__u_master__DOT__state;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_ack 
            = ((4U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state)) 
               & (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done));
        if (vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en) {
            if ((0xaULL == vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div)) {
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
            } else if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi = 0U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
                if ((0U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt))) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done = 1U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt = 1U;
                } else if ((1U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt))) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done = 1U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt = 2U;
                } else if ((2U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt))) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done = 0U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt = 0U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 0U;
                }
            } else if (VL_UNLIKELY(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done)) {
                VL_WRITEF("[MASTER] EXEC_ENCRYPT: crypto_done=%b, last_block=%b\n",
                          1,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done,
                          1,(IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__last_block));
                vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en = 0U;
                if (vlSelf->crypt_spi_dut__DOT__u_master__DOT__last_block) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 5U;
                } else {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx = 0ULL;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 2U;
                    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
            if (VL_LIKELY((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state)))) {
                if (((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                     & (~ (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev)))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count)));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                        = ((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                            << 1U) | (QData)((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted)));
                }
                if (((~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck)) 
                     & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev))) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi 
                        = (1U & (IData)((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                                         >> 0x3fU)));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                        = (vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                           << 1U);
                }
                if ((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count))) {
                    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en = 0U;
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready = 1U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 4U;
                }
            } else {
                VL_WRITEF("[MASTER] FILL: bit_count=%2#, ss_delay=%b, ss=%b\n",
                          6,vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count,
                          1,(IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__ss_delay),
                          1,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss);
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = 0U;
                if (((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                     & (~ (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev)))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count)));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                        = ((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                            << 1U) | (QData)((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted)));
                }
                if (((~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck)) 
                     & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev))) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi 
                        = (1U & (IData)((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                                         >> 0x3fU)));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                        = (vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                           << 1U);
                }
                if ((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready = 1U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 4U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__ss_delay = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = 0U;
            if (VL_UNLIKELY(((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                             & (~ (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev))))) {
                VL_WRITEF("[MASTER] CMD_PARSE: data_to_send[0]=%b, full_data=0x%016x\n",
                          1,(1U & (IData)(vlSelf->master_data)),
                          64,vlSelf->master_data);
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                    = ((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                        << 1U) | (QData)((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted)));
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi 
                    = (1U & (IData)((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr 
                                     >> (0x3fU & ((IData)(0x3fU) 
                                                  - (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count))))));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count)));
                if ((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
                    if ((1U & (IData)(vlSelf->master_data))) {
                        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                            = VL_SHIFTL_QQI(64,64,32, vlSelf->master_data, 0x30U);
                        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 3U;
                    } else {
                        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx 
                            = VL_SHIFTL_QQI(64,64,32, vlSelf->master_data, 0x30U);
                        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 2U;
                    }
                }
            }
        } else {
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt = 0U;
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = 1U;
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi = 0U;
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done = 0U;
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div = 0ULL;
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__ss_delay = 0U;
            if (VL_UNLIKELY(vlSelf->start)) {
                VL_WRITEF("[MASTER] Start transmission, data_to_send=0x%016x\n",
                          64,vlSelf->master_data);
                vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr 
                    = vlSelf->master_data;
                vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 1U;
            }
        }
        if (VL_UNLIKELY(vlSelf->crypt_spi_dut__DOT__u_master__DOT__ss_delay)) {
            VL_WRITEF("[MASTER] **** Raising ss ****\n");
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = 1U;
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__ss_delay = 0U;
        }
    } else {
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__sck = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 0U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready = 0U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = 1U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
        vlSelf->crypt_spi_dut__DOT__u_master__DOT__cmd_reg = 0ULL;
        vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_prev = 0U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done = 0U;
        vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en = 0U;
        vlSelf->crypt_spi_dut__DOT__u_master__DOT__total_blocks = 1U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__ss_delay = 0U;
    }
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_prev;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__state 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__ss_delay 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__ss_delay;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__crypto_done;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__miso_encrypted;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__sck;
    vlSelf->crypto_done = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done;
    vlSelf->miso_encrypted = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted;
    vlSelf->crypto_ack = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_ack;
    vlSelf->sck = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck;
    vlSelf->mosi = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi;
    vlSelf->done = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done;
    vlSelf->block_ready = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready;
    vlSelf->ss = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss;
}
