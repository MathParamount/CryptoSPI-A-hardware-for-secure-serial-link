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
    Vspi_dut_spi_bus_if* __PVT__spi_dut__DOT__spi_if;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_n,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(miso,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(sck,0,0);
    VL_OUT8(mosi,0,0);
    VL_OUT8(debug_state,2,0);
    VL_OUT8(ss,0,0);
    CData/*2:0*/ spi_dut__DOT__u_master__DOT__state;
    CData/*6:0*/ spi_dut__DOT__u_master__DOT__bit_count;
    CData/*0:0*/ spi_dut__DOT__u_master__DOT__sck_prev;
    CData/*0:0*/ spi_dut__DOT__u_master__DOT__ss_delay;
    CData/*2:0*/ spi_dut__DOT__u_master__DOT__done_counter;
    CData/*3:0*/ spi_dut__DOT__u_slave__DOT__bit_count;
    CData/*0:0*/ spi_dut__DOT__u_slave__DOT__ss_prev;
    CData/*0:0*/ spi_dut__DOT__u_slave__DOT__miso_reg;
    CData/*2:0*/ __Vdly__debug_state;
    CData/*0:0*/ __Vdly__spi_dut__DOT__u_master__DOT__sck_prev;
    CData/*2:0*/ __Vdly__spi_dut__DOT__u_master__DOT__state;
    CData/*2:0*/ __Vdly__spi_dut__DOT__u_master__DOT__done_counter;
    CData/*6:0*/ __Vdly__spi_dut__DOT__u_master__DOT__bit_count;
    CData/*0:0*/ __Vdly__spi_dut__DOT__u_master__DOT__ss_delay;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__spi_dut__DOT__spi_if__sck__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(master_data,15,0);
    VL_IN16(slave_data_to_send,15,0);
    VL_OUT16(data_received,15,0);
    SData/*15:0*/ spi_dut__DOT__u_master__DOT__sr;
    SData/*15:0*/ spi_dut__DOT__u_master__DOT__cmd_reg;
    SData/*15:0*/ spi_dut__DOT__u_master__DOT__sr_tx;
    SData/*15:0*/ spi_dut__DOT__u_master__DOT__sr_rx;
    SData/*15:0*/ spi_dut__DOT__u_master__DOT__sck_div;
    SData/*15:0*/ spi_dut__DOT__u_slave__DOT__sr_rx;
    SData/*15:0*/ spi_dut__DOT__u_slave__DOT__sr_tx;
    SData/*15:0*/ __Vdly__spi_dut__DOT__u_master__DOT__sck_div;
    SData/*15:0*/ __Vdly__spi_dut__DOT__u_master__DOT__sr_rx;
    SData/*15:0*/ __Vdly__spi_dut__DOT__u_master__DOT__sr_tx;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
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
