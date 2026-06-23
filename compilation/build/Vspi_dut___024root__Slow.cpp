// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_dut.h for the primary calling header

#include "Vspi_dut__pch.h"
#include "Vspi_dut__Syms.h"
#include "Vspi_dut___024root.h"

void Vspi_dut___024root___ctor_var_reset(Vspi_dut___024root* vlSelf);

Vspi_dut___024root::Vspi_dut___024root(Vspi_dut__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vspi_dut___024root___ctor_var_reset(this);
}

void Vspi_dut___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vspi_dut___024root::~Vspi_dut___024root() {
}
