transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

vlog -sv -work work +incdir+/home/gabriel-cruz/projects/CryptoSPI-A-hardware-for-secure-serial-link/testbench/top {/home/gabriel-cruz/projects/CryptoSPI-A-hardware-for-secure-serial-link/testbench/top/spi_top.sv}
vlog -sv -work work +incdir+/home/gabriel-cruz/projects/CryptoSPI-A-hardware-for-secure-serial-link/pkg {/home/gabriel-cruz/projects/CryptoSPI-A-hardware-for-secure-serial-link/pkg/state_control.sv}
vlog -sv -work work +incdir+/home/gabriel-cruz/projects/CryptoSPI-A-hardware-for-secure-serial-link/rtl/interface {/home/gabriel-cruz/projects/CryptoSPI-A-hardware-for-secure-serial-link/rtl/interface/spi_bus_if.sv}
vlog -sv -work work +incdir+/home/gabriel-cruz/projects/CryptoSPI-A-hardware-for-secure-serial-link/testbench/wrapper {/home/gabriel-cruz/projects/CryptoSPI-A-hardware-for-secure-serial-link/testbench/wrapper/spi_dut.sv}
vlog -sv -work work +incdir+/home/gabriel-cruz/projects/CryptoSPI-A-hardware-for-secure-serial-link/rtl {/home/gabriel-cruz/projects/CryptoSPI-A-hardware-for-secure-serial-link/rtl/slaver_receiver.sv}
vlog -sv -work work +incdir+/home/gabriel-cruz/projects/CryptoSPI-A-hardware-for-secure-serial-link/rtl {/home/gabriel-cruz/projects/CryptoSPI-A-hardware-for-secure-serial-link/rtl/master_send.sv}

