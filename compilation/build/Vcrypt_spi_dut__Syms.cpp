// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcrypt_spi_dut__pch.h"
#include "Vcrypt_spi_dut.h"
#include "Vcrypt_spi_dut___024root.h"
#include "Vcrypt_spi_dut_spi_bus_if.h"

// FUNCTIONS
Vcrypt_spi_dut__Syms::~Vcrypt_spi_dut__Syms()
{
}

Vcrypt_spi_dut__Syms::Vcrypt_spi_dut__Syms(VerilatedContext* contextp, const char* namep, Vcrypt_spi_dut* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__crypt_spi_dut__DOT__spi_if{this, Verilated::catName(namep, "crypt_spi_dut.spi_if")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__crypt_spi_dut__DOT__spi_if = &TOP__crypt_spi_dut__DOT__spi_if;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__crypt_spi_dut__DOT__spi_if.__Vconfigure(true);
}
