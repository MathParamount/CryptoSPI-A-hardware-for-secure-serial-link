// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrypt_spi_dut.h for the primary calling header

#include "Vcrypt_spi_dut__pch.h"
#include "Vcrypt_spi_dut__Syms.h"
#include "Vcrypt_spi_dut_spi_bus_if.h"

void Vcrypt_spi_dut_spi_bus_if___ctor_var_reset(Vcrypt_spi_dut_spi_bus_if* vlSelf);

Vcrypt_spi_dut_spi_bus_if::Vcrypt_spi_dut_spi_bus_if(Vcrypt_spi_dut__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcrypt_spi_dut_spi_bus_if___ctor_var_reset(this);
}

void Vcrypt_spi_dut_spi_bus_if::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcrypt_spi_dut_spi_bus_if::~Vcrypt_spi_dut_spi_bus_if() {
}
