// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vspi_dut.h for the primary calling header

#ifndef VERILATED_VSPI_DUT___024ROOT_H_
#define VERILATED_VSPI_DUT___024ROOT_H_  // guard

#include "verilated.h"
class Vspi_dut_spi_bus_if;


class Vspi_dut__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vspi_dut___024root final : public VerilatedModule {
  public:
    // CELLS
    Vspi_dut_spi_bus_if* __PVT__spi_dut__DOT__sc_interface;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(miso,0,0);
    VL_OUT8(sck,0,0);
    VL_OUT8(ss,0,0);
    VL_OUT8(mosi,0,0);
    CData/*1:0*/ spi_dut__DOT__u_master__DOT__state;
    CData/*0:0*/ spi_dut__DOT__u_master__DOT__ready;
    CData/*2:0*/ spi_dut__DOT__u_master__DOT__bit_count;
    CData/*1:0*/ spi_dut__DOT__u_master__DOT__sck_div;
    CData/*3:0*/ spi_dut__DOT__u_slaver__DOT__bit_count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__spi_dut__DOT__sc_interface__sck__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(data_to_send,15,0);
    VL_OUT16(data_received,15,0);
    SData/*14:0*/ spi_dut__DOT__u_master__DOT__sr;
    SData/*15:0*/ spi_dut__DOT__u_slaver__DOT__tx_buffer;
    SData/*14:0*/ spi_dut__DOT__u_slaver__DOT__sr;
    IData/*31:0*/ spi_dut__DOT__u_master__DOT__count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vspi_dut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vspi_dut___024root(Vspi_dut__Syms* symsp, const char* v__name);
    ~Vspi_dut___024root();
    VL_UNCOPYABLE(Vspi_dut___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
