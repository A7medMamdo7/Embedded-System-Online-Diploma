#include "uart.h"

unsigned char string_buffer[100] = "Learn-in-depth:<Ahmed Mamdouh>" ;
unsigned char const string_buffer2[100];
void main(void)
{
	Uart_send_string(string_buffer);
	
}