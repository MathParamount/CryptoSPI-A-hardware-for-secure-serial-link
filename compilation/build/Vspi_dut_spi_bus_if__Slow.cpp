// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_dut.h for the primary calling header

#include "Vspi_dut__pch.h"
#include "Vspi_dut__Syms.h"
#include "Vspi_dut_spi_bus_if.h"

void Vspi_dut_spi_bus_if___ctor_var_reset(Vspi_dut_spi_bus_if* vlSelf);

Vspi_dut_spi_bus_if::Vspi_dut_spi_bus_if(Vspi_dut__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vspi_dut_spi_bus_if___ctor_var_reset(this);
}

void Vspi_dut_spi_bus_if::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vspi_dut_spi_bus_if::~Vspi_dut_spi_bus_if() {
}
