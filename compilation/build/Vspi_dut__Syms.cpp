// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vspi_dut__pch.h"
#include "Vspi_dut.h"
#include "Vspi_dut___024root.h"
#include "Vspi_dut_spi_bus_if.h"

// FUNCTIONS
Vspi_dut__Syms::~Vspi_dut__Syms()
{
}

Vspi_dut__Syms::Vspi_dut__Syms(VerilatedContext* contextp, const char* namep, Vspi_dut* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__spi_dut__DOT__sc_interface{this, Verilated::catName(namep, "spi_dut.sc_interface")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__spi_dut__DOT__sc_interface = &TOP__spi_dut__DOT__sc_interface;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__spi_dut__DOT__sc_interface.__Vconfigure(true);
    // Setup scopes
    __Vscope_spi_dut__u_master.configure(this, name(), "spi_dut.u_master", "u_master", -9, VerilatedScope::SCOPE_OTHER);
}
