#!/bin/bash

set -e

TOP=spi_dut
BUILD_DIR=build

#Auto-clean build
rm -rf ${BUILD_DIR}
mkdir -p ${BUILD_DIR}

verilator \
	--c \
	--exe \
	--build \
	--trace \
	--timescale "1ns/1ps" \
	-Wall \
	--assert \
	--x-assign unique \
	--x-initial unique \
	--top-module ${TOP} \
	-Irtl \
	-../Irtl/interface \
	-../Irtl/pkg \
	../pkg/state_control.sv \
	../interface/spi_bus_if.sv \
	../rtl/master_send.sv \
	../rtl/slaver_receiver.sv \
	../testbench/top/spi_top.sv \
	../testbench/wrapper/spi_dut.sv \
	script_test.cpp \
	-o sim_${TOP} \
	--Mdir ${BUILD_DIR}

echo "\t\t SIMULATION...  \t\t"

#Executing binary
./${BUILD_DIR}/sim_${TOP}

echo"\t\t FINISHED  \t\t"
