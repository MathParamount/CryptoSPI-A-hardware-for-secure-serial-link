# Initialization

This project was developed using Verilator and C++ for digital design simulation. Before running the project, make sure these tools are installed on your machine. 
Verilator’s official installation guide recommends either using a package manager or building from source, and its source repository is available on GitHub.
	
- Ubuntu/Linux:

To install the C++ toolchain required to compile and modify script_test.cpp, run:

```
sudo apt update
sudo apt install build-essential git help2man perl python3 make autoconf g++ flex bison ccache
sudo apt install libfl2 libfl-dev zlibc zlib1g zlib1g-dev
```

The build-essential package provides the core GNU compiler toolchain on Ubuntu, including g++. Then clone the Verilator repository:

```
git clone https://github.com/verilator/verilator.git
```

After cloning, go to the Verilator directory and build it:

```
cd verilator
autoconf
./configure
make -j$(nproc)
sudo make install
```

To verify that the installation was successful, run:
```
g++ --version
verilator --version
```

Finally, clone this repository to access and run the project:
```
git clone https://github.com/MathParamount/CryptoSPI-A-hardware-for-secure-serial-link.git
```

# Compilation
	The compilation is find in the root path of this project which is find the run_verl.sh, script_test.cpp and wave.vcd. To be able to test the compilation you need to go to this folder and run bash file.

Correct path to compilation:
```
./CryptoSPI-A-hardware-for-secure-serial-link/compilation/
```

To test the project, run:

```bash
./run_verl.sh
```

## Wave visualization

The waveform view is used to verify that the project works and meets the scope requirements. To inspect signals interactively, install GTKWave:

```bash
sudo apt update
sudo apt install gtkwave
```

GTKWave is a waveform viewer used to analyze simulation dump files such as VCD, EVCD, FST, and others . For additional installation details and dependencies on Ubuntu, refer to the official documentation [GTKWave](https://gtkwave.sourceforge.net/).[web:10].
