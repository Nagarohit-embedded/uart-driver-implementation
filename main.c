#include "uart.h"

int main() {
    UART_Init(9600);

    UART_Send('H');
    UART_Send('i');

    uint8_t data = UART_Receive();

    return 0;
}
