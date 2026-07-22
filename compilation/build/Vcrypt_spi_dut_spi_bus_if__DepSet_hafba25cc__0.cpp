// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrypt_spi_dut.h for the primary calling header

#include "Vcrypt_spi_dut__pch.h"
#include "Vcrypt_spi_dut_spi_bus_if.h"

std::string VL_TO_STRING(const Vcrypt_spi_dut_spi_bus_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcrypt_spi_dut_spi_bus_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
