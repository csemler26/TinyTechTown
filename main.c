#include "main.h"

int main(void)
{
    // Enable global interrupts
    __enable_irq();

#if ENABLE_SERIAL_DEBUG
    console_init();
    printf("\x1b[2J\x1b[;H");
    printf("******************\n\r");
    printf("* ECE453 Dev Platform\n\r");
    printf("******************\n\r");
#endif

}