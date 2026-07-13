#!/bin/bash

set -e

TOP=spi_dut
BUILD_DIR=build

#Auto-clean build
rm -rf ${BUILD_DIR}
mkdir -p ${BUILD_DIR}

verilator \
	--cc \
	--exe \
	--build \
	--trace-fst \
	--timescale "1ns/1ps" \
	-Wall \
	--assert \
	--x-assign unique \
	--x-initial unique \
	--top-module ${TOP} \
	-Irtl \
	-I../Irtl/interface \
	-I../pkg \
	-I../testbench/top \
	-I../testbench/wrapper\
	../pkg/state_control.sv \
	../rtl/interface/spi_bus_if.sv \
	../rtl/master_send.sv \
	../rtl/slaver_receiver.sv \
	../testbench/top/spi_top.sv \
	../testbench/wrapper/spi_dut.sv \
	script_test.cpp \
	-o sim_${TOP} \
	--Mdir ${BUILD_DIR}

echo "       SIMULATION...       "

#Executing binary
./${BUILD_DIR}/sim_${TOP}

echo "       FINISHED        "
