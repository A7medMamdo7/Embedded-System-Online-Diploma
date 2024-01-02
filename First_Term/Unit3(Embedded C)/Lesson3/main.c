#include <stdint.h>

#define RCC_BASE     0x40021000
#define PORTA_BASE   0x40010800

#define RCC_APB2ENR  *(volatile uint32_t *)(RCC_BASE+0x18)
#define GPIOA_CRH    *(volatile uint32_t *)(PORTA_BASE+0x04)
#define GPIOA_ODR    *(volatile uint32_t *)(PORTA_BASE+0x0c)
unsigned char g_variables[3]={1,2,3};
unsigned char const const_variables[3]={4,5,6};
unsigned char bss_var[3] ;
int main(void)
{	
	RCC_APB2ENR |= 1<<2;
	GPIOA_CRH &= 0xff0fffff;
	GPIOA_CRH |= 0x00200000;
	while(1)
	{
		GPIOA_ODR |= 1<<13;         //set bit 13
		for(int i=0;i<4000;i++);
		GPIOA_ODR &= ~(1<<13);      //clear bit 13
		for(int i=0;i<4000;i++);
	}


	for(;;);
}
