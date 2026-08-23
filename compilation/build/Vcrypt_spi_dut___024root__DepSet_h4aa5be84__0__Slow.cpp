// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrypt_spi_dut.h for the primary calling header

#include "Vcrypt_spi_dut__pch.h"
#include "Vcrypt_spi_dut__Syms.h"
#include "Vcrypt_spi_dut___024root.h"

VL_ATTR_COLD void Vcrypt_spi_dut___024root___eval_initial__TOP(Vcrypt_spi_dut___024root* vlSelf);

VL_ATTR_COLD void Vcrypt_spi_dut___024root___eval_initial(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_initial\n"); );
    // Body
    Vcrypt_spi_dut___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset_n__0 = vlSelf->reset_n;
    vlSelf->__Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0 
        = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrypt_spi_dut___024root___dump_triggers__stl(Vcrypt_spi_dut___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcrypt_spi_dut___024root___eval_triggers__stl(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcrypt_spi_dut___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vcrypt_spi_dut___024root___stl_sequent__TOP__0(Vcrypt_spi_dut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrypt_spi_dut___024root___stl_sequent__TOP__0\n"); );
    // Body
    VL_WRITEF("[TOP] ss = %b\n[SLAVE] ss_input = %b\n",
              1,vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss,
              1,(IData)(vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss));
    vlSelf->done = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.done;
    vlSelf->sck = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.sck;
    vlSelf->ss = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ss;
    vlSelf->crypto_ack = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_ack;
    vlSelf->mosi = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi;
    vlSelf->miso = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso;
    vlSelf->mosi_encrypted = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.mosi_encrypted;
    vlSelf->miso_encrypted = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.miso_encrypted;
    vlSelf->crypto_done = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.crypto_done;
    vlSelf->block_ready = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.block_ready;
    vlSelf->encrypt_text = vlSelf->crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text_reg;
    vlSelf->ciphertext = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.ciphertext;
    vlSelf->plaintext = vlSymsp->TOP__crypt_spi_dut__DOT__spi_if.plaintext;
    vlSelf->crypt_spi_dut__DOT__u_master__DOT__last_block 
        = ((IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__block_count) 
           == ((IData)(vlSelf->crypt_spi_dut__DOT__u_master__DOT__total_blocks) 
               - (IData)(1U)));
}
