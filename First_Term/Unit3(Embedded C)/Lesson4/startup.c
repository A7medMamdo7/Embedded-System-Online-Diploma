//Startup.c________ENG.Ahmed Mamdouh
#include <stdint.h>
extern int main(void);
void reset_handler(void);
void Default_handler()
{
	reset_handler();
}
void NMI_handler(void) __attribute__ ((weak,alias("Default_handler")));;
void H_fault_handler(void) __attribute__ ((weak,alias("Default_handler")));;

// booking 1024B located by .bss through unintialized array of long 256 element
static unsigned long Stack_top[256] ;

void (* const g_p_fn_vectors[])()  __attribute__((section(".vectors"))) =
{
	(void(*)())  ((unsigned long)Stack_top+sizeof(Stack_top)),
	&reset_handler,
	&NMI_handler,
	&H_fault_handler,
};
extern unsigned int _E_text ;
extern unsigned int _S_data ;
extern unsigned int _E_data ;
extern unsigned int _S_bss ;
extern unsigned int _E_bss ;

void reset_handler()
{
	//copy data section from flash to sram
	unsigned int data_size = (unsigned char*)&_E_data - (unsigned char*)&_S_data ;
	unsigned char *p_src = (unsigned char*)&_E_text ;
	unsigned char *p_dis = (unsigned char*)&_S_data ;
	for(int i =0;i<data_size;i++)
	{
		*((unsigned char*)p_dis++)=*((unsigned char*)p_src++) ;
	}

	// init .bss section in sram =0
	unsigned int bss_size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss ;
	p_dis = (unsigned char*)&_S_bss ;
	for(int i =0;i<bss_size;i++)
	{
		*((unsigned char*)p_dis++)= (unsigned char)0 ;
	}

	// jump to main()
	main();
}