// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_dut.h for the primary calling header

#include "Vspi_dut__pch.h"
#include "Vspi_dut_spi_bus_if.h"

std::string VL_TO_STRING(const Vspi_dut_spi_bus_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vspi_dut_spi_bus_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
