// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vcrypt_spi_dut___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"IDLE_CRYPT", "RECEPTION", "ENCRYPT", "SIMON_ENCRYPT", 
                                "TRANSMISSION", "DECRYPT", 
                                "DONE_CRYPT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(1, "state_control::encrypt_state", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "CMD_PARSE", "FILL_BUFFER", "DRAIN_BUFFER", 
                                "EXEC_ENCRYPT", "DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(2, "state_control::state_t", 6, 3, __VenumItemNames, __VenumItemValues);
    }
}

void Vcrypt_spi_dut___024root__trace_decl_types(VerilatedFst* tracep) {
    Vcrypt_spi_dut___024root__traceDeclTypesSub0(tracep);
}
