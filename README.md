# UART Driver Implementation in Embedded C

This project demonstrates a UART (Universal Asynchronous Receiver-Transmitter) driver implemented using register-level programming in Embedded C.

## Overview

The project implements a basic UART driver by directly accessing hardware registers. It includes initialization, data transmission, and data reception functionalities.

## Features

* UART initialization with configurable baud rate
* Data transmission using UART_Send()
* Data reception using UART_Receive()
* Register-level programming (no external libraries)
* Modular driver structure (header and source files)

## Files Structure

* uart.c → UART driver implementation
* uart.h → Function prototypes and macros
* uart_reg.c → Simulated hardware registers
* uart_reg.h → Register structure definitions

## Working Principle

UART communication works by transmitting data serially using TX and RX lines without a clock signal.

* CR1 → Control register (enable UART, TX, RX)
* BRR → Baud rate configuration
* DR → Data register for transmission/reception
* SR → Status register (TXE, RXNE flags)

## How It Works

1. UART_Init() configures baud rate and enables UART
2. UART_Send() writes data to the data register
3. UART_Receive() checks RX flag and reads received data

## Code Explanation

* Bit manipulation is used to control hardware registers
* TXE flag indicates transmission ready
* RXNE flag indicates data received
* Data is transferred using DR register

## Applications

* Microcontroller communication
* Debugging via serial communication
* Embedded system data transfer
* Sensor and device interfacing

## Future Improvements

* Interrupt-based UART communication
* DMA support for high-speed transfer
* Error handling (parity, framing errors)
