// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrypt_spi_dut.h for the primary calling header

#include "Vcrypt_spi_dut__pch.h"
#include "Vcrypt_spi_dut___024root.h"

VL_ATTR_COLD void Vcrypt_spi_dut___024root___eval_static__TOP(Vcrypt_spi_dut___024root* vlSelf);

VL_ATTR_COLD void Vcrypt_spi_dut___024root___eval_static(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_static\n"); );
    // Body
    Vcrypt_spi_dut___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vcrypt_spi_dut___024root___eval_static__TOP(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__last_block = 1U;
}

VL_ATTR_COLD void Vcrypt_spi_dut___024root___eval_initial__TOP(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_initial__TOP\n"); );
    // Body
    VL_WRITEF("Crypto module instantiated\nplain_text bits: 64\n");
}

VL_ATTR_COLD void Vcrypt_spi_dut___024root___eval_final(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrypt_spi_dut___024root___dump_triggers__stl(Vcrypt_spi_dut___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcrypt_spi_dut___024root___eval_phase__stl(Vcrypt_spi_dut___024root* vlSelf);

VL_ATTR_COLD void Vcrypt_spi_dut___024root___eval_settle(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vcrypt_spi_dut___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../pkg/../testbench/wrapper/crypt_spi_dut.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcrypt_spi_dut___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrypt_spi_dut___024root___dump_triggers__stl(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcrypt_spi_dut___024root___stl_sequent__TOP__0(Vcrypt_spi_dut___024root* vlSelf);

VL_ATTR_COLD void Vcrypt_spi_dut___024root___eval_stl(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcrypt_spi_dut___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcrypt_spi_dut___024root___eval_triggers__stl(Vcrypt_spi_dut___024root* vlSelf);

VL_ATTR_COLD bool Vcrypt_spi_dut___024root___eval_phase__stl(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcrypt_spi_dut___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vcrypt_spi_dut___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrypt_spi_dut___024root___dump_triggers__ico(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrypt_spi_dut___024root___dump_triggers__act(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or negedge reset_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge crypt_spi_dut.spi_if.sck)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge crypt_spi_dut.spi_if.sck)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge reset_n or posedge crypt_spi_dut.spi_if.sck)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrypt_spi_dut___024root___dump_triggers__nba(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or negedge reset_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge crypt_spi_dut.spi_if.sck)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge crypt_spi_dut.spi_if.sck)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge reset_n or posedge crypt_spi_dut.spi_if.sck)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcrypt_spi_dut___024root___ctor_var_reset(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->master_data = VL_RAND_RESET_Q(64);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->miso = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->data_received = VL_RAND_RESET_Q(64);
    vlSelf->sck = VL_RAND_RESET_I(1);
    vlSelf->mosi = VL_RAND_RESET_I(1);
    vlSelf->debug_state = VL_RAND_RESET_I(3);
    vlSelf->debug_state_crypt = VL_RAND_RESET_I(3);
    vlSelf->ss = VL_RAND_RESET_I(1);
    vlSelf->crypto_done = VL_RAND_RESET_I(1);
    vlSelf->block_ready = VL_RAND_RESET_I(1);
    vlSelf->cipher_text = VL_RAND_RESET_Q(64);
    vlSelf->nonce = VL_RAND_RESET_Q(64);
    vlSelf->lfsr_cipher = VL_RAND_RESET_Q(64);
    vlSelf->mosi_encrypted = VL_RAND_RESET_Q(64);
    vlSelf->miso_encrypted = VL_RAND_RESET_Q(64);
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr = VL_RAND_RESET_Q(64);
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__cmd_reg = VL_RAND_RESET_Q(64);
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_tx = VL_RAND_RESET_Q(64);
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sr_rx = VL_RAND_RESET_Q(64);
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__bit_count = VL_RAND_RESET_I(7);
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_div = VL_RAND_RESET_Q(64);
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_prev = VL_RAND_RESET_I(1);
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__sck_en = VL_RAND_RESET_I(1);
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__last_block = VL_RAND_RESET_I(1);
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__done_cnt = VL_RAND_RESET_I(2);
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count = VL_RAND_RESET_I(16);
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__total_blocks = VL_RAND_RESET_I(16);
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_rx = VL_RAND_RESET_Q(64);
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__data_to_send = VL_RAND_RESET_Q(64);
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__sr_tx = VL_RAND_RESET_Q(64);
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__bit_count = VL_RAND_RESET_I(7);
    vlSelf->crypt_spi_dut__DOT__u_slave__DOT__ss_prev = VL_RAND_RESET_I(1);
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_encr = VL_RAND_RESET_I(3);
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__state_mast = VL_RAND_RESET_I(3);
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__plain_text = VL_RAND_RESET_Q(64);
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__slave_rx = VL_RAND_RESET_Q(64);
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text = VL_RAND_RESET_Q(64);
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_m = VL_RAND_RESET_Q(64);
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_s = VL_RAND_RESET_Q(64);
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt = VL_RAND_RESET_I(6);
    vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encypt_count = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_prev = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__debug_state_crypt = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encypt_count = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_m = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_s = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
