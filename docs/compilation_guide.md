# Initialization
	Firstly this project has been developed with verilator tool and C++ to digital design simulation. Hence, urge to install these tools in your desktop.
	
- Ubuntu/Linux:

To download the c++ language to be able to test and change the script_test.cpp (file responsible to simulate the project):

```
sudo apt update
sudo apt install build-essential git help2man perl python3 make autoconf g++ flex bison ccache
sudo apt install libfl2 libfl-dev zlibc zlib1g zlib1g-dev
```

Moreover, urge to download the verilator tool:

```
git clone https://github.com/verilator/verilator.git
```

You need to find the path where was made the download of verilator folder and write down:

```
cd verilator
autoconf
./configure
make -j$(nproc)
sudo make install
```

To test the installation tools (write down):
```
g++ --version
verilator --version
```

# Compilation
	The compilation is find in the root path of this project which is find the run_verl.sh, script_test.cpp and wave.vcd. To be able to test the compilation you need to go to this folder and run bash file.

Correct path to compilation:
```
./CryptoSPI-A-hardware-for-secure-serial-link/compilation/
```

Hence, if you call the run_verl.sh file you will be able to test:

```
./run_verl.sh
```

# Observations
