// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrypt_spi_dut.h for the primary calling header

#include "Vcrypt_spi_dut__pch.h"
#include "Vcrypt_spi_dut_spi_bus_if.h"

VL_ATTR_COLD void Vcrypt_spi_dut_spi_bus_if___ctor_var_reset(Vcrypt_spi_dut_spi_bus_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrypt_spi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcrypt_spi_dut_spi_bus_if___ctor_var_reset\n"); );
    // Body
    vlSelf->sck = VL_RAND_RESET_I(1);
    vlSelf->mosi = VL_RAND_RESET_I(1);
    vlSelf->miso = VL_RAND_RESET_I(1);
    vlSelf->ss = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->block_ready = VL_RAND_RESET_I(1);
    vlSelf->miso_encrypted = VL_RAND_RESET_I(1);
    vlSelf->mosi_encrypted = VL_RAND_RESET_I(1);
    vlSelf->crypto_done = VL_RAND_RESET_I(1);
    vlSelf->ciphertext = VL_RAND_RESET_Q(64);
    vlSelf->plaintext = VL_RAND_RESET_Q(64);
    vlSelf->crypto_ack = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sck = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__crypto_done = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__miso_encrypted = VL_RAND_RESET_I(1);
}
