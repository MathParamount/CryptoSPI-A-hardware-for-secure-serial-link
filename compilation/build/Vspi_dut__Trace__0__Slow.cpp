// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_dut__Syms.h"


VL_ATTR_COLD void Vspi_dut___024root__trace_init_sub__TOP__spi_dut__DOT__sc_interface__0(Vspi_dut___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vspi_dut___024root__trace_init_sub__TOP__0(Vspi_dut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+17,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"data_to_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+20,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"data_received",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+24,0,"mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("spi_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"data_to_send",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+20,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"data_received",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+24,0,"mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("sc_interface", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_dut___024root__trace_init_sub__TOP__spi_dut__DOT__sc_interface__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_master", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("machine_mast", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_dut___024root__trace_init_sub__TOP__spi_dut__DOT__sc_interface__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+4,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+13,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+5,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+7,0,"bit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+8,0,"sck_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_slaver", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("machine_slav", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vspi_dut___024root__trace_init_sub__TOP__spi_dut__DOT__sc_interface__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+1,0,"tx_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+3,0,"bit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vspi_dut___024root__trace_init_sub__TOP__spi_dut__DOT__sc_interface__0(Vspi_dut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root__trace_init_sub__TOP__spi_dut__DOT__sc_interface__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+9,0,"sck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"miso",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"ss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"mosi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"data_received",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"data_to_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"slave_data_received",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vspi_dut___024root__trace_init_top(Vspi_dut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root__trace_init_top\n"); );
    // Body
    Vspi_dut___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vspi_dut___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vspi_dut___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vspi_dut___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vspi_dut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vspi_dut___024root__trace_register(Vspi_dut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vspi_dut___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vspi_dut___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vspi_dut___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vspi_dut___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vspi_dut___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root__trace_const_0\n"); );
    // Init
    Vspi_dut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_dut___024root*>(voidSelf);
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vspi_dut___024root__trace_full_0_sub_0(Vspi_dut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vspi_dut___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root__trace_full_0\n"); );
    // Init
    Vspi_dut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_dut___024root*>(voidSelf);
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vspi_dut___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vspi_dut___024root__trace_full_0_sub_0(Vspi_dut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vspi_dut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_dut___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->spi_dut__DOT__u_slaver__DOT__tx_buffer),16);
    bufp->fullSData(oldp+2,(vlSelf->spi_dut__DOT__u_slaver__DOT__sr),15);
    bufp->fullCData(oldp+3,(vlSelf->spi_dut__DOT__u_slaver__DOT__bit_count),4);
    bufp->fullCData(oldp+4,(vlSelf->spi_dut__DOT__u_master__DOT__state),2);
    bufp->fullBit(oldp+5,(vlSelf->spi_dut__DOT__u_master__DOT__ready));
    bufp->fullSData(oldp+6,(vlSelf->spi_dut__DOT__u_master__DOT__sr),15);
    bufp->fullCData(oldp+7,(vlSelf->spi_dut__DOT__u_master__DOT__bit_count),3);
    bufp->fullCData(oldp+8,(vlSelf->spi_dut__DOT__u_master__DOT__sck_div),2);
    bufp->fullBit(oldp+9,(vlSymsp->TOP__spi_dut__DOT__sc_interface.sck));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__spi_dut__DOT__sc_interface.ss));
    bufp->fullBit(oldp+11,(vlSymsp->TOP__spi_dut__DOT__sc_interface.mosi));
    bufp->fullSData(oldp+12,(vlSymsp->TOP__spi_dut__DOT__sc_interface.data_received),16);
    bufp->fullBit(oldp+13,(vlSelf->spi_dut__DOT__u_master__DOT__start));
    bufp->fullIData(oldp+14,(vlSelf->spi_dut__DOT__u_master__DOT__count),32);
    bufp->fullBit(oldp+15,(vlSymsp->TOP__spi_dut__DOT__sc_interface.miso));
    bufp->fullSData(oldp+16,(vlSymsp->TOP__spi_dut__DOT__sc_interface.slave_data_received),16);
    bufp->fullBit(oldp+17,(vlSelf->clk));
    bufp->fullBit(oldp+18,(vlSelf->reset));
    bufp->fullSData(oldp+19,(vlSelf->data_to_send),16);
    bufp->fullBit(oldp+20,(vlSelf->miso));
    bufp->fullBit(oldp+21,(vlSelf->sck));
    bufp->fullBit(oldp+22,(vlSelf->ss));
    bufp->fullSData(oldp+23,(vlSelf->data_received),16);
    bufp->fullBit(oldp+24,(vlSelf->mosi));
}
