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
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0))));
    vlSelf->__VactTriggered.set(3U, ((~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0)));
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

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__0(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__0\n"); );
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
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__is_write 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__is_write;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encypt_count 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__count_round 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__xs 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__ys 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr;
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg 
        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__miso_encrypted 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__plaintext 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__crypto_done 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v4 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v5 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v6 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v7 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v8 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v9 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v10 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v11 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v12 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v13 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v14 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v15 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v16 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v17 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v18 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v19 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v20 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v21 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v22 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v23 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v24 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v25 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v26 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v27 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v28 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v29 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v30 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v31 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v32 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v33 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v34 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v35 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v36 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v37 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v38 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v39 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v40 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v41 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v42 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v43 = 0U;
    vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v44 = 0U;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__2(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__2\n"); );
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

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__3(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__3\n"); );
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
                << 1U) | (QData)((IData)((1U & (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted)))));
        __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count)));
        if (VL_UNLIKELY((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count)))) {
            VL_WRITEF("SLAVE: data_received(plaintext) = 0x%016x, data_received(chiphertext) = 0x%016x\n",
                      64,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext,
                      64,vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx);
            __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count = 0U;
        }
    }
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count 
        = __Vdly__crypt_spi_dut__DOT__u_slave__DOT__bit_count;
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx 
        = __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_rx;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__4(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__4\n"); );
    // Init
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0 = 0;
    IData/*31:0*/ __Vilp;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v1;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v1 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v2;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v2 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v4;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v4 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v5;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v5 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v6;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v6 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v7;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v7 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v8;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v8 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v9;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v9 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v10;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v10 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v11;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v11 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v12;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v12 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v13;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v13 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v14;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v14 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v15;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v15 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v16;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v16 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v17;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v17 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v18;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v18 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v19;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v19 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v20;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v20 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v21;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v21 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v22;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v22 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v23;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v23 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v24;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v24 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v25;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v25 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v26;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v26 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v27;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v27 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v28;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v28 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v29;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v29 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v30;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v30 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v31;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v31 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v32;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v32 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v33;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v33 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v34;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v34 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v35;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v35 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v36;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v36 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v37;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v37 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v38;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v38 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v39;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v39 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v40;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v40 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v41;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v41 = 0;
    IData/*31:0*/ __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v42;
    __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v42 = 0;
    // Body
    if (vlSelf->reset_n) {
        vlSelf->debug_state_crypt = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_mast;
        if ((4U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
            if ((2U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
                if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 0U;
                } else if (vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_ack) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__crypto_done = 0U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 0U;
                }
            } else if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk2__DOT__k = 0x29U;
                VL_WRITEF("\nPlaintext from master: 0x%016x\n",
                          64,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext);
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 4U;
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__plaintext 
                    = ((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__is_write)
                        ? (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__Post_SMplaintext 
                           ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m)
                        : (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__Post_SMplaintext 
                           ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__Post_SMplaintext 
                    = (((QData)((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__y)) 
                        << 0x20U) | (QData)((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__x)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__y 
                    = (IData)((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ciphertext 
                               >> 0x20U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__x 
                    = (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ciphertext);
            } else {
                if (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__is_write) {
                    if (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__decrpt_signal) {
                        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted 
                            = (QData)((IData)((1U & (IData)(
                                                            (vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(0x3fU) 
                                                                 - (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt))))))));
                        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__miso_encrypted = 0ULL;
                    } else {
                        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted 
                            = (QData)((IData)((1U & (IData)(
                                                            (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ciphertext 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(0x3fU) 
                                                                 - (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt))))))));
                        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__miso_encrypted = 0ULL;
                    }
                } else if (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__decrpt_signal) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__miso_encrypted 
                        = (QData)((IData)((1U & (IData)(
                                                        (vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext 
                                                         >> 
                                                         (0x3fU 
                                                          & ((IData)(0x3fU) 
                                                             - (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt))))))));
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted = 0ULL;
                } else {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__miso_encrypted 
                        = (QData)((IData)((1U & (IData)(
                                                        (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ciphertext 
                                                         >> 
                                                         (0x3fU 
                                                          & ((IData)(0x3fU) 
                                                             - (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt))))))));
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted = 0ULL;
                }
                VL_WRITEF("[CRYPTO] send bit[%0#]=%b to MASTER (data=0x%016x)\n",
                          6,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt,
                          1,(1U & (IData)((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ciphertext 
                                           >> (0x3fU 
                                               & ((IData)(0x3fU) 
                                                  - (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt)))))),
                          64,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ciphertext);
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt)));
                if ((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt))) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__crypto_done = 1U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt = 0U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 6U;
                }
            }
        } else if ((2U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
            if (VL_UNLIKELY((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr)))) {
                VL_WRITEF("[SIMON] count_round=%2#, xs=0x%08x, ys=0x%08x\n",
                          6,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round,
                          32,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs,
                          32,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys);
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__unnamedblk1__DOT__i = 0x2aU;
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0 
                    = (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m);
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0 = 1U;
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v1 
                    = (IData)((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m 
                               >> 0x20U));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v2 
                    = (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m);
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__ys 
                    = (IData)((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg 
                               >> 0x20U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__xs 
                    = (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg);
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__count_round = 0U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [1U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                          [1U] >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [1U] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [1U] >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [0U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [2U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                          [2U] >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [1U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v4 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v4 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [3U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                          [3U] >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [3U] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [3U] >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [2U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v5 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v5 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [4U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                          [4U] >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [3U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v6 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v6 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [5U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                          [5U] >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [5U] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [5U] >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [4U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v7 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v7 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [6U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                          [6U] >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [5U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v8 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v8 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [7U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                          [7U] >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [7U] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [7U] >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [6U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v9 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v9 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [8U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                          [8U] >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [7U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v10 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v10 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [9U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                          [9U] >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [9U] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [9U] >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [8U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v11 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v11 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0xaU] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                            [0xaU] 
                                            >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [9U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v12 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v12 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0xbU] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                            [0xbU] 
                                            >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [0xbU] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                               [0xbU] 
                                               >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0xaU] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v13 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v13 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0xcU] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                            [0xcU] 
                                            >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0xbU] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v14 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v14 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0xdU] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                            [0xdU] 
                                            >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [0xdU] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                               [0xdU] 
                                               >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [0xcU] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v15 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v15 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0xeU] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                            [0xeU] 
                                            >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [0xdU] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v16 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v16 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0xfU] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                            [0xfU] 
                                            >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [0xfU] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                               [0xfU] 
                                               >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0xeU] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v17 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v17 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x10U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x10U] 
                                             >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [0xfU] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v18 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v18 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x11U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x11U] 
                                             >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [0x11U] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                                [0x11U] 
                                                >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [0x10U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v19 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v19 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x12U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x12U] 
                                             >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0x11U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v20 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v20 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x13U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x13U] 
                                             >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [0x13U] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                                [0x13U] 
                                                >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0x12U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v21 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v21 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x14U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x14U] 
                                             >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [0x13U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v22 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v22 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x15U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x15U] 
                                             >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [0x15U] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                                [0x15U] 
                                                >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0x14U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v23 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v23 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x16U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x16U] 
                                             >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0x15U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v24 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v24 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x17U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x17U] 
                                             >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [0x17U] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                                [0x17U] 
                                                >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [0x16U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v25 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v25 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x18U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x18U] 
                                             >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0x17U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v26 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v26 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x19U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x19U] 
                                             >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [0x19U] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                                [0x19U] 
                                                >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0x18U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v27 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v27 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x1aU] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x1aU] 
                                             >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [0x19U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v28 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v28 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x1bU] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x1bU] 
                                             >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [0x1bU] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                                [0x1bU] 
                                                >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0x1aU] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v29 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v29 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x1cU] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x1cU] 
                                             >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0x1bU] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v30 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v30 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x1dU] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x1dU] 
                                             >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [0x1dU] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                                [0x1dU] 
                                                >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [0x1cU] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v31 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v31 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x1eU] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x1eU] 
                                             >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [0x1dU] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v32 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v32 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x1fU] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x1fU] 
                                             >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [0x1fU] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                                [0x1fU] 
                                                >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0x1eU] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v33 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v33 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x20U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x20U] 
                                             >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [0x1fU] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v34 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v34 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x21U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x21U] 
                                             >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [0x21U] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                                [0x21U] 
                                                >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [0x20U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v35 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v35 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x22U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x22U] 
                                             >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0x21U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v36 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v36 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x23U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x23U] 
                                             >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [0x23U] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                                [0x23U] 
                                                >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0x22U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v37 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v37 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x24U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x24U] 
                                             >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [0x23U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v38 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v38 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x25U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x25U] 
                                             >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [0x25U] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                                [0x25U] 
                                                >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0x24U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v39 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v39 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x26U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x26U] 
                                             >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0x25U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v40 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v40 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x27U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x27U] 
                                             >> 3U));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
                       ^ ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                           [0x27U] << 0x1cU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                                [0x27U] 
                                                >> 4U)));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                       [0x26U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp);
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v41 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v41 = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                        [0x28U] << 0x1dU) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                                             [0x28U] 
                                             >> 3U));
                vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0 
                    = (1U ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                             [0x27U] ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp));
                __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v42 
                    = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vlvbound_h3846e1a8__0;
                vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v42 = 1U;
                if ((0x2aU > (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round))) {
                    VL_WRITEF("x_new_size:          32\n");
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__ys 
                        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__x_new;
                    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__x_new 
                        = (((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys 
                             ^ (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol1 
                                & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol8)) 
                            ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol2) 
                           ^ ((0x29U >= (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round))
                               ? vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key
                              [vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round]
                               : vlSelf->crypt_spi_dut__DOT__u_crypt__DOT____Vxrand_h8d93fe75__5));
                    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol1 
                        = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs 
                            << 1U) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs 
                                      >> 0x1fU));
                    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol8 
                        = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs 
                            << 4U) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs 
                                      >> 0x1cU));
                    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__rol2 
                        = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs 
                            << 2U) | (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs 
                                      >> 0x1eU));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__xs 
                        = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__count_round 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round)));
                } else {
                    VL_WRITEF("[SIMON] Final: ciphertext: 0x%016x , ciphertext_size:          64\n",
                              64,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ciphertext);
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__count_round = 0U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__count_round 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round)));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 4U;
                    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ciphertext 
                        = (((QData)((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys)) 
                            << 0x20U) | (QData)((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs)));
                }
            } else {
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m 
                        << 1U) | (QData)((IData)((1U 
                                                  & VL_REDXOR_64(
                                                                 (0x8000080200400402ULL 
                                                                  & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m))))));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s 
                        << 1U) | (QData)((IData)((1U 
                                                  & VL_REDXOR_64(
                                                                 (0x8000080200400402ULL 
                                                                  & vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s))))));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encypt_count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count)));
                if ((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encypt_count = 0U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg 
                        = ((IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__is_write)
                            ? (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                               ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m)
                            : (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
                               ^ vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 3U;
                }
            }
        } else if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss)))) {
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
                        << 1U) | (QData)((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi)));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
                    = ((vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
                        << 1U) | (QData)((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso)));
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt)));
                if ((7U == (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__is_write 
                        = (1U & (~ (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text)));
                }
                if (VL_UNLIKELY((0x3fU == (IData)(vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt)))) {
                    VL_WRITEF("[RECEPTION] is_write: %1#, plain_text: 0x%016x, slaver_rx: 0x%016x, encrypt_text_reg: 0x%016x\n",
                              1,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__is_write,
                              64,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text,
                              64,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx,
                              64,vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg);
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt = 0U;
                    if (vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__is_write) {
                        vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 2U;
                        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__decrpt_signal = 0U;
                    } else {
                        vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 5U;
                        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__decrpt_signal = 1U;
                    }
                }
            }
        } else {
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt = 0U;
            if ((1U & (~ (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss)))) {
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 1U;
            }
        }
    } else {
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = 0U;
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_mast = 0U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__crypto_done = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m = 1ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s = 0x8000000000000000ULL;
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ciphertext = 0ULL;
        vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v43 = 1U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp = 0U;
        vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v44 = 1U;
    }
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ys = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__ys;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__xs = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__xs;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__count_round 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__count_round;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__temp 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__temp;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_m;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__lfsr_s;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encypt_count;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__is_write 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__is_write;
    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__plaintext;
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg;
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v0;
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[1U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v1;
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[2U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v2;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[2U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v3;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v4) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[3U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v4;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v5) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[4U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v5;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v6) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[5U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v6;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v7) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[6U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v7;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v8) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[7U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v8;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v9) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[8U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v9;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v10) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[9U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v10;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v11) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0xaU] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v11;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v12) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0xbU] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v12;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v13) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0xcU] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v13;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v14) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0xdU] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v14;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v15) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0xeU] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v15;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v16) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0xfU] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v16;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v17) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x10U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v17;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v18) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x11U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v18;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v19) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x12U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v19;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v20) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x13U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v20;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v21) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x14U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v21;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v22) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x15U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v22;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v23) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x16U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v23;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v24) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x17U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v24;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v25) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x18U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v25;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v26) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x19U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v26;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v27) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x1aU] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v27;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v28) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x1bU] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v28;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v29) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x1cU] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v29;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v30) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x1dU] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v30;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v31) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x1eU] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v31;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v32) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x1fU] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v32;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v33) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x20U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v33;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v34) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x21U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v34;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v35) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x22U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v35;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v36) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x23U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v36;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v37) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x24U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v37;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v38) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x25U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v38;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v39) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x26U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v39;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v40) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x27U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v40;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v41) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x28U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v41;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v42) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0x29U] 
            = __Vdlyvval__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v42;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v43) {
        vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__crypt_spi_dut__DOT__u_crypt__DOT__round_key__v44) {
        __Vilp = 1U;
        while ((__Vilp <= 0x29U)) {
            vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__round_key[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->plaintext = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext;
    vlSelf->mosi_encrypted = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted;
    vlSelf->ciphertext = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__ciphertext;
    vlSelf->encrypt_text = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__5(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss) {
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev = 1U;
    } else if (vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev) {
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
            = vlSelf->master_data;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev = 0U;
    } else {
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso 
            = (1U & (IData)((vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
                             >> 0x3fU)));
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
            = (vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
               << 1U);
    }
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev;
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx 
        = vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx;
    vlSelf->miso = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso;
}

VL_INLINE_OPT void Vcrypt_spi_dut___024root___nba_sequent__TOP__6(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___nba_sequent__TOP__6\n"); );
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
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = 1U;
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
            if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
                if (((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                     & (~ (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev)))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count)));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                        = ((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                            << 1U) | (QData)((IData)(
                                                     (1U 
                                                      & (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted)))));
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
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = 0U;
                if (((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                     & (~ (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev)))) {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count)));
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                        = ((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                            << 1U) | (QData)((IData)(
                                                     (1U 
                                                      & (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted)))));
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
                if (vlSelf->crypt_spi_dut__DOT__u_master__DOT__ss_delay) {
                    vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = 1U;
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__ss_delay = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__state))) {
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = 0U;
            if (((IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck) 
                 & (~ (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev)))) {
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                    = ((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx 
                        << 1U) | (QData)((IData)((1U 
                                                  & (IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted)))));
                vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi 
                    = (1U & (IData)((vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr 
                                     >> (0x3fU & ((IData)(0x3fU) 
                                                  - (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count))))));
                if (VL_UNLIKELY((7U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count)))) {
                    VL_WRITEF("[MASTER] CMD_PARSE: data_to_send[0]=%b, full=0x%016x\n",
                              1,(1U & (IData)(vlSelf->master_data)),
                              64,vlSelf->master_data);
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
                    if ((7U == (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count))) {
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
                } else {
                    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count)));
                }
            }
        } else {
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt = 0U;
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__ss_delay = 0U;
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = 1U;
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi = 0U;
            vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done = 0U;
            vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div = 0ULL;
            if (VL_UNLIKELY(vlSelf->start)) {
                VL_WRITEF("[MASTER] Start transmission, data_to_send=0x%016x\n",
                          64,vlSelf->master_data);
                vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr 
                    = vlSelf->master_data;
                vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en = 1U;
                vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 1U;
            }
        }
    } else {
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.__Vdly__sck = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__ss_delay = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = 0U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready = 0U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss = 1U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi = 0U;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div = 0ULL;
        vlSelf->crypt_spi_dut__DOT__u_master__DOT__cmd_reg = 0ULL;
        vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx = 0ULL;
        vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_prev = 0U;
        vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done = 0U;
        vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en = 0U;
        vlSelf->crypt_spi_dut__DOT__u_master__DOT__total_blocks = 1U;
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
    vlSelf->ss = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss;
    vlSelf->mosi = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi;
    vlSelf->done = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done;
    vlSelf->block_ready = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready;
}
