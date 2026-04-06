# Overview
This focus in develop a advanced SPI(Serial periphearl interface) communication protocol in systemverilog that encrypt original data ("plain text") building a "ciphertext" that will be send to the FIFO (first in first out) raw of the SPI controller, hence the SPI transfer crypted data.

# Detail

- SPI controller;
- FIFO to store data;
- LFSR to generate keys;
- Simon core;
- Integration;

I think in compare the overall efficiency in clock cycles of the project in comparison with others cryptography tools.

# Conclusion

The peripheral communication inner hardwares has been in constant development and issues are emeriging meanly envolving a secure data transfer.
