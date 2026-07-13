// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vspi_dut___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"IDLE", "CMD_PARSE", "FILL_BUFFER", "DRAIN_BUFFER", 
                                "DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(1, "state_control::state_t", 5, 3, __VenumItemNames, __VenumItemValues);
    }
}

void Vspi_dut___024root__trace_decl_types(VerilatedFst* tracep) {
    Vspi_dut___024root__traceDeclTypesSub0(tracep);
}
