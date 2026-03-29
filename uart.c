#include <stdio.h>
#include "uart.h"

void UART_Init(uint32_t baudrate)
{
    UART1.BRR = baudrate;          // Set baudrate
    UART1.CR1 |= UART_CR1_UE;      // Enable UART
    UART1.CR1 |= UART_CR1_TE;      // Enable Transmitter
    UART1.CR1 |= UART_CR1_RE;      // Enable Receiver

    printf("UART Initialized with Baudrate: %u\n", baudrate);
}

void UART_Send(uint8_t data)
{
    UART1.DR = data;               // Load data register
    UART1.SR |= UART_SR_TXE;       // Set TXE flag

    printf("UART Sent: %c\n", data);
}

uint8_t UART_Receive(void)
{
    if (UART1.SR & UART_SR_RXNE)
    {
        UART1.SR &= ~UART_SR_RXNE;   // Clear RX flag
        return (uint8_t)UART1.DR;
    }

    return 0;
}
