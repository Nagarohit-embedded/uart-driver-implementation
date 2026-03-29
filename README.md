# UART Driver Implementation in Embedded C

Embedded C implementation of UART driver using register-level programming with transmit and receive functionality.

## Overview

This project demonstrates a UART driver implemented using low-level register access. It includes initialization, transmission, and reception functions.

## Features

* UART initialization with configurable baud rate
* Data transmission and reception
* Register-level programming (no libraries)
* Modular driver structure

## File Structure

* main.c → Example usage of UART driver
* uart.c → Driver implementation
* uart.h → Function prototypes and macros
* uart_reg.c → Simulated UART registers
* uart_reg.h → Register definitions

## Working Principle

UART is an asynchronous communication protocol that transmits data without a clock signal using TX and RX lines.

Registers used:

* CR1 → Control register (enable UART, TX, RX)
* BRR → Baud rate register
* DR → Data register
* SR → Status register (TXE, RXNE flags)

## How to Run

1. Compile all files together

   gcc main.c uart.c uart_reg.c -o uart
   
2. Run the program

   ./uart

## Applications

* Embedded communication systems
* Microcontroller data transfer
* Debugging and logging

## Future Improvements

* Interrupt-based communication
* DMA support
* Error handling (parity, framing errors)
