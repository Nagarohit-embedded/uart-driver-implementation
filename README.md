# UART Driver Implementation (Embedded C)

## 🔹 Overview

This project implements a **UART (Universal Asynchronous Receiver Transmitter) driver** using **register-level programming in Embedded C**.

The driver enables reliable **serial communication** between microcontroller and external devices by handling both **transmission (TX)** and **reception (RX)** operations.

This project focuses on **low-level peripheral control**, without using any external libraries or HAL.

---

## 🔹 Features

* UART Initialization (Baud rate configuration)
* Data Transmission (TX)
* Data Reception (RX)
* Polling-based communication
* Register-level programming
* Lightweight and efficient implementation

---

## 🔹 Technologies Used

* Embedded C
* STM32 / Generic Microcontroller
* UART Protocol
* Register-Level Programming

---

## 🔹 Project Structure

```
uart-driver/
│
├── inc/
│   ├── uart.h        // Function declarations
│   └── uart_reg.h    // Register definitions
│
├── src/
│   ├── uart.c        // UART logic implementation
│   └── uart_reg.c    // Register configuration
│
├── main.c            // Example usage
└── README.md
```

---

## 🔹 UART Working Principle

![Image](https://upload.wikimedia.org/wikipedia/commons/c/c2/UART_block_diagram.svg)

![Image](https://www.researchgate.net/publication/254028865/figure/fig6/AS%3A668760394461195%401536456311696/Universal-Asynchronous-Receiver-Transmitter-UART-system-module-attached-with-the.png)

![Image](https://www.researchgate.net/publication/340062601/figure/fig24/AS%3A871193624191015%401584720154984/UART-Data-Structure-The-start-bit-is-logical-LOW-and-the-stop-bit-is-logical-HIGH-These.png)

![Image](https://europe1.discourse-cdn.com/arduino/original/4X/7/6/d/76d7e8eb0c7dabdecdf30e8b87afc7e70d75291f.png)

UART is an **asynchronous serial communication protocol**, meaning no clock signal is shared between devices.

### 🔸 Communication Flow:

1. Data is loaded into the transmit register
2. Converted into serial bits (start + data + stop bits)
3. Sent over communication line
4. Receiver reconstructs data from incoming bits

---

## 🔹 How It Works

### 1. Initialization

* Configure baud rate
* Enable UART peripheral
* Enable TX and RX

### 2. Transmission

* Load data into transmit register
* Wait until transmission is complete

### 3. Reception

* Wait for data availability
* Read data from receive register

---

## 🔹 API Functions

### 🔸 Initialize UART

```c
void UART_Init(void);
```

### 🔸 Send Single Character

```c
void UART_SendChar(char data);
```

### 🔸 Receive Single Character

```c
char UART_ReceiveChar(void);
```

### 🔸 Send String

```c
void UART_SendString(char *str);
```

---

## 🔹 Example Usage

```c
#include "uart.h"

int main()
{
    UART_Init();

    UART_SendChar('H');
    UART_SendChar('i');

    UART_SendString(" UART Working\n");

    char data = UART_ReceiveChar();

    while(1);
}
```

---

## 🔹 Output

* Characters successfully transmitted via UART
* Data received correctly from serial terminal
* Verified communication between devices

---

## 🔹 Applications

* Serial communication between microcontrollers
* Debugging using serial monitor
* Sensor data transmission
* Communication with modules (GPS, Bluetooth, etc.)

---

## 🔹 Key Learnings

* Register-level programming
* UART protocol implementation
* Embedded system communication
* Peripheral interfacing

---

## 🔹 Future Improvements

* Interrupt-based UART
* DMA-based communication
* Error handling (parity, framing errors)
* Integration with RTOS (FreeRTOS)

---

## 🔹 Author

**Naga Rohit Anudeep N**
Embedded Systems Engineer

---

## 🔹 Tags

Embedded C, UART Driver, STM32, Firmware Development, Register-Level Programming
