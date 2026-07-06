// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSPI_DUT__SYMS_H_
#define VERILATED_VSPI_DUT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vspi_dut.h"

// INCLUDE MODULE CLASSES
#include "Vspi_dut___024root.h"
#include "Vspi_dut_spi_bus_if.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vspi_dut__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vspi_dut* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vspi_dut___024root             TOP;
    Vspi_dut_spi_bus_if            TOP__spi_dut__DOT__spi_if;

    // CONSTRUCTORS
    Vspi_dut__Syms(VerilatedContext* contextp, const char* namep, Vspi_dut* modelp);
    ~Vspi_dut__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
