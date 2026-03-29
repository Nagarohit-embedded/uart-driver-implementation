#ifndef UART_H
#define UART_H

#include <stdint.h>
#include "uart_reg.h"

/* Bit Definitions */
#define UART_CR1_UE     (1 << 0)
#define UART_CR1_TE     (1 << 3)
#define UART_CR1_RE     (1 << 2)

#define UART_SR_TXE     (1 << 7)
#define UART_SR_RXNE    (1 << 5)

/* Function Prototypes */
void UART_Init(uint32_t baudrate);
void UART_Send(uint8_t data);
uint8_t UART_Receive(void);

#endif
