// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcrypt_spi_dut.h for the primary calling header

#ifndef VERILATED_VCRYPT_SPI_DUT_SPI_BUS_IF_H_
#define VERILATED_VCRYPT_SPI_DUT_SPI_BUS_IF_H_  // guard

#include "verilated.h"


class Vcrypt_spi_dut__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcrypt_spi_dut_spi_bus_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ sck;
    CData/*0:0*/ mosi;
    CData/*0:0*/ miso;
    CData/*0:0*/ ss;
    CData/*0:0*/ done;
    CData/*0:0*/ block_ready;
    CData/*0:0*/ crypto_done;
    CData/*0:0*/ crypto_ack;
    CData/*0:0*/ __Vdly__sck;
    CData/*0:0*/ __Vdly__crypto_done;
    QData/*63:0*/ miso_encrypted;
    QData/*63:0*/ mosi_encrypted;
    QData/*63:0*/ ciphertext;
    QData/*63:0*/ __Vdly__miso_encrypted;

    // INTERNAL VARIABLES
    Vcrypt_spi_dut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcrypt_spi_dut_spi_bus_if(Vcrypt_spi_dut__Syms* symsp, const char* v__name);
    ~Vcrypt_spi_dut_spi_bus_if();
    VL_UNCOPYABLE(Vcrypt_spi_dut_spi_bus_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vcrypt_spi_dut_spi_bus_if* obj);

#endif  // guard
