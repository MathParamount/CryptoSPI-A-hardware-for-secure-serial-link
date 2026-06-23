// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_dut.h for the primary calling header

#include "Vspi_dut__pch.h"
#include "Vspi_dut_spi_bus_if.h"

VL_ATTR_COLD void Vspi_dut_spi_bus_if___ctor_var_reset(Vspi_dut_spi_bus_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vspi_dut_spi_bus_if___ctor_var_reset\n"); );
    // Body
    vlSelf->sck = VL_RAND_RESET_I(1);
    vlSelf->miso = VL_RAND_RESET_I(1);
    vlSelf->ss = VL_RAND_RESET_I(1);
    vlSelf->mosi = VL_RAND_RESET_I(1);
    vlSelf->data_received = VL_RAND_RESET_I(16);
    vlSelf->slave_data_received = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__slave_data_received = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__miso = VL_RAND_RESET_I(1);
}
