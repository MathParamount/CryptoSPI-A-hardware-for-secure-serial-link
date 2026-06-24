// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vspi_dut.h for the primary calling header

#ifndef VERILATED_VSPI_DUT_SPI_BUS_IF_H_
#define VERILATED_VSPI_DUT_SPI_BUS_IF_H_  // guard

#include "verilated.h"


class Vspi_dut__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vspi_dut_spi_bus_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ sck;
    CData/*0:0*/ __PVT__start;
    CData/*0:0*/ __PVT__done;
    CData/*0:0*/ miso;
    CData/*0:0*/ ss;
    CData/*0:0*/ mosi;
    CData/*0:0*/ __Vdly__miso;
    SData/*15:0*/ data_received;
    SData/*15:0*/ slave_data_received;
    SData/*15:0*/ __Vdly__slave_data_received;

    // INTERNAL VARIABLES
    Vspi_dut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vspi_dut_spi_bus_if(Vspi_dut__Syms* symsp, const char* v__name);
    ~Vspi_dut_spi_bus_if();
    VL_UNCOPYABLE(Vspi_dut_spi_bus_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vspi_dut_spi_bus_if* obj);

#endif  // guard
