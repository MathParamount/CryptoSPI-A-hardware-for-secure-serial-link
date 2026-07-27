// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcrypt_spi_dut.h for the primary calling header

#ifndef VERILATED_VCRYPT_SPI_DUT___024ROOT_H_
#define VERILATED_VCRYPT_SPI_DUT___024ROOT_H_  // guard

#include "verilated.h"
class Vcrypt_spi_dut_spi_bus_if;


class Vcrypt_spi_dut__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcrypt_spi_dut___024root final : public VerilatedModule {
  public:
    // CELLS
    Vcrypt_spi_dut_spi_bus_if* __PVT__crypt_spi_dut__DOT__spi_if;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset_n,0,0);
        VL_IN8(start,0,0);
        VL_OUT8(miso,0,0);
        VL_OUT8(done,0,0);
        VL_OUT8(sck,0,0);
        VL_OUT8(mosi,0,0);
        VL_OUT8(debug_state,2,0);
        VL_OUT8(debug_state_crypt,2,0);
        VL_OUT8(ss,0,0);
        VL_OUT8(crypto_done,0,0);
        VL_OUT8(block_ready,0,0);
        CData/*2:0*/ crypt_spi_dut__DOT__u_master__DOT__state;
        CData/*6:0*/ crypt_spi_dut__DOT__u_master__DOT__bit_count;
        CData/*0:0*/ crypt_spi_dut__DOT__u_master__DOT__sck_prev;
        CData/*0:0*/ crypt_spi_dut__DOT__u_master__DOT__sck_en;
        CData/*0:0*/ crypt_spi_dut__DOT__u_master__DOT__last_block;
        CData/*1:0*/ crypt_spi_dut__DOT__u_master__DOT__done_cnt;
        CData/*6:0*/ crypt_spi_dut__DOT__u_slave__DOT__bit_count;
        CData/*0:0*/ crypt_spi_dut__DOT__u_slave__DOT__ss_prev;
        CData/*2:0*/ crypt_spi_dut__DOT__u_crypt__DOT__state_encr;
        CData/*2:0*/ crypt_spi_dut__DOT__u_crypt__DOT__state_mast;
        CData/*5:0*/ crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt;
        CData/*5:0*/ crypt_spi_dut__DOT__u_crypt__DOT__encypt_count;
        CData/*0:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_prev;
        CData/*2:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__state;
        CData/*6:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__bit_count;
        CData/*1:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__done_cnt;
        CData/*0:0*/ __Vdly__crypt_spi_dut__DOT__u_slave__DOT__ss_prev;
        CData/*2:0*/ __Vdly__debug_state_crypt;
        CData/*2:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__state_encr;
        CData/*5:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__cycle_cnt;
        CData/*5:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__encypt_count;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__crypt_spi_dut__DOT__spi_if__sck__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ crypt_spi_dut__DOT__u_master__DOT__block_count;
        SData/*15:0*/ crypt_spi_dut__DOT__u_master__DOT__total_blocks;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(master_data,63,0);
        VL_OUT64(data_received,63,0);
        VL_OUT64(cipher_text,63,0);
        VL_OUT64(nonce,63,0);
        VL_OUT64(lfsr_cipher,63,0);
        VL_OUT64(mosi_encrypted,63,0);
        VL_OUT64(miso_encrypted,63,0);
        QData/*63:0*/ crypt_spi_dut__DOT__u_master__DOT__sr;
        QData/*63:0*/ crypt_spi_dut__DOT__u_master__DOT__cmd_reg;
        QData/*63:0*/ crypt_spi_dut__DOT__u_master__DOT__sr_tx;
        QData/*63:0*/ crypt_spi_dut__DOT__u_master__DOT__sr_rx;
        QData/*63:0*/ crypt_spi_dut__DOT__u_master__DOT__sck_div;
        QData/*63:0*/ crypt_spi_dut__DOT__u_slave__DOT__sr_rx;
        QData/*63:0*/ crypt_spi_dut__DOT__u_slave__DOT__data_to_send;
        QData/*63:0*/ crypt_spi_dut__DOT__u_slave__DOT__sr_tx;
        QData/*63:0*/ crypt_spi_dut__DOT__u_crypt__DOT__plain_text;
        QData/*63:0*/ crypt_spi_dut__DOT__u_crypt__DOT__slave_rx;
        QData/*63:0*/ crypt_spi_dut__DOT__u_crypt__DOT__encrypt_text;
        QData/*63:0*/ crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_m;
        QData/*63:0*/ crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_s;
        QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__sck_div;
        QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_tx;
    };
    struct {
        QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_master__DOT__sr_rx;
        QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_slave__DOT__sr_tx;
        QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__plain_text;
        QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__slave_rx;
        QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_m;
        QData/*63:0*/ __Vdly__crypt_spi_dut__DOT__u_crypt__DOT__epherm_key_s;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcrypt_spi_dut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcrypt_spi_dut___024root(Vcrypt_spi_dut__Syms* symsp, const char* v__name);
    ~Vcrypt_spi_dut___024root();
    VL_UNCOPYABLE(Vcrypt_spi_dut___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
