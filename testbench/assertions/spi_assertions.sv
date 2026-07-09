`timescale 1ns/1ps;

import state_control::*;

state_t state;

// state transaction verification
property start_assign
	@(posedge clk) $rose(start) && !reset |=> ss == 0 && state == CMD_PARSE;
endproperty

property state_assign1
	@(posedge clk) state == IDLE |=> state == CMD_PARSE ##1 (state == FILL_BUFFER or state == DRAIN_BUFFER) ##1 state == DONE ##1 state == IDLE;
endproperty

//signal intergrity
property signal_start
	@(posedge clk) state != IDLE |=> !start;
endproperty

property signal_ss
	@(posedge clk) $fell(ss) |-> $rose(miso);
endproperty

property signal_dummy
	@(posedge clk) $fell(ss) && !spi_if.sck  |-> spi_if.mosi == 0;
endproperty

property signal_done
	@(posedge clk) $rose(spi_if.done) |-> ss == 0;
endproperty

//covers
C1: cover property ( @(posedge clk) $rose(start) |=> start && state != IDLE);

C2: cover property ( @(posedge clk) $rose(ss) |=> miso == 1);

