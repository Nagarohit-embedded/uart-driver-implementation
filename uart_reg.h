#ifndef UART_REG_H
#define UART_REG_H

#include <stdint.h>

typedef struct
{
    volatile uint32_t SR;     // Status Register
    volatile uint32_t DR;     // Data Register
    volatile uint32_t BRR;    // Baud Rate Register
    volatile uint32_t CR1;    // Control Register 1
    volatile uint32_t CR2;    // Control Register 2

} UART_RegDef_t;

extern UART_RegDef_t UART1;

#endif
