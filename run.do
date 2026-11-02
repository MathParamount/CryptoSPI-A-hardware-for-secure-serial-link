#   cd /home/gabriel-cruz/projects/CryptoSPI-A-hardware-for-secure-serial-link
#   vsim -c -do run.do

quit -sim

if {[file exists work]} { vdel -all }
vlib work
vmap work work

vlog -sv -mfcu \
    pkg/state_control.sv \
    rtl/interface/spi_bus_if.sv \
    rtl/master_send.sv \
    rtl/slaver_receiver.sv \
    testbench/wrapper/spi_dut.sv \
    testbench/top/spi_top.sv

vsim -voptargs="+acc" work.tb_spi

add wave -divider "TB"
add wave sim:/tb_spi/clk sim:/tb_spi/reset_n sim:/tb_spi/start

add wave -divider "SPI bus"
add wave sim:/tb_spi/sck sim:/tb_spi/ss sim:/tb_spi/mosi sim:/tb_spi/miso

add wave -divider "Top outputs"
add wave -radix hex sim:/tb_spi/data_received
add wave sim:/tb_spi/done
add wave sim:/tb_spi/debug_state

run -all
