# Overview

The SPI is a full-duplex serial protocol which is used in short-distance to data transfers. The main architecture of this protocol involved a master block sending data to slavers with a handshake protocol.
It's widely used in,e.g, sensors, motherboard to transfer high important data. Moreover, it has been used extensively, such as Trusted Platform Module (TPM) that store and generate cryptographic keys.
However, the actual model of the security systems has been developed by proprietary company which the code and digital design are not publically available.
There are different kinds of TPMs and the major use is firware TPM (fTPM) which the control logic system runs involuntary inside of computer main processors, due to high-security exigencies some enterprise servers 
prefer to use a discrete TPM (dTPM) which is soldered onto the motherboard.
Hence, this project try to solve some emergency demand which ringes on of a open-source digital control system and application of classic/quantum cryptography in a most useful hardware communication protocol nowadays.

# Architecture
	
### High-Level digital design:


![Digital architecture](docs/photos/digital_architecture_overview.png)

The system employs a classic Master-Slave topology:

- Master: Generates the clock (SCK) and manages the Slave Select (SS) signal. It is responsible for initializing the control block on the slave device and orchestrating data exchange.
- Slaver: Responds to the master's commands, processes cryptographic operations (LFSR/Simon), and manages bi-directional data flow via the shift register.

The primary data path connects the **Shift Register** to an internal **Buffer**, which is specifically designed to safely store incoming data. This separation ensures data integrity during transmission.

```plaintext
								+-------------+     SPI Bus     +--------------+
								|   Master    | <-------------> |    Slaver    |
								| (Clock Gen) |   (MOSI/MISO)   |  			   |
								|     		  |      		    |			   |
								|    T_x      |    (SCK/SS)     |	  R_x      |	
								|	  ->      |				    |	  ->	   |
								|	buffer    |				    |	 buffer	   |
								+-------------+                 +--------------+
										|                              |
										|-- Control & Initialization --|
```

### Six stage pipeline:

The processing flow is divided into six distinct stages to optimize throughput and timing:

1. Command Parsing (cmd_parse): Interprets incoming instructions from the master and determines the system's operational mode. It serves as the decision-making core.

2. Data Loading (fill_buffer): Acts as the receiver. It captures incoming data from the MISO line and stores it into the internal buffer. Manages the writing process into the internal buffer,
handling data alignment and LSB-first verification during the transmission state.

3. Data Unloading (drain_buffer): Acts as the sender. It retrieves data from the buffer and shifts it out onto the MOSI line.

5. Finalization: Manages the handshake back to the SPI interface for transmission.

### SPI finite state machine (FSM):

![FSM architecture](docs/photos/FSM_digital_overview.png)

The digital control logic was made to be executed inside of master which controls the data flow and defines the behavior of the system. The FSM was implemented with 5 states:

1. IDLE: Asserts default signal values (`ss` high, `sck` low) and waits for the simulation start or external trigger to initiate the flow.

2. CMD_PARSE: Activates the slave by pulling `ss` low. Initializes the internal `sr_rx` buffer for the upcoming cycle. Moreover it reads the LSB of the command byte to dynamically 
branch into either a write (Master sends data) or read (Master receives data) operation.

3. FILL_BUFFER: Samples the `miso` line on specific clock edges. Observes the master's `sck` to synchronize serial data shifting and drives the `mosi` line with the next buffered bit, handling the transmission path.

4. DRAIN_BUFFER: adopt the reception mechanism which get the miso value and transfer from the shifter register to the buffer.

5. DONE: Deactivates the slave by driving `ss` high. Asserts the `done` flag, signaling transaction completion and readying the FSM to return to IDLE.

## Crypto digital architecture

...

# Waveform analyses

# Installing and compilation

# Observations

# Status (development)

SPI architecture design (completed)
RTL SPI (completed)
Testbench & waveform SPI (completed)
SPI + crypto architecture (completed)
crypto digital control logic (completed)
LFSR implementation (completed)
LFSR key mix SIMON (In progress)
Documentation SPI RTL (In progress)
Formal verification (In progress)
SVA (In progress)
Validation architecture with side-channel attacks (In progress)
FPGA implementation (In progress)
side-channel attacks (power analyses, time analyses,...) in FPGA (In progress)
Universal Handshake protocol to multiple slavers (In progress)
Site creation looking to documentation, real case use, call to action (In progress)

# Conclusion
