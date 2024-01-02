/* startup_cortexM3.s  ENG.Ahmed Mamdouh */
/*SRAM 0X20000000*/
.section .vectors
.word 0x20001000          /* stack top address */
.word _reset			  /* Reset */
.word _Vector_handler     /* 2 NMI */
.word _Vector_handler  	  /* 3 Hard Fault */
.word _Vector_handler     /* 4 MM Fault */
.word _Vector_handler     /* 5 Bus Fault */
.word _Vector_handler     /* 6 Usage Fault */
.word _Vector_handler     /* 7 RESERVED */
.word _Vector_handler     /* 8 RESERVED */
.word _Vector_handler     /* 9 RESERVED */
.word _Vector_handler     /* 10 RESERVED */
.word _Vector_handler     /* 11 SV Call */
.word _Vector_handler     /* 12 Debug Reserved */
.word _Vector_handler     /* 13 RESERVED */
.word _Vector_handler     /* 14 PendSV */
.word _Vector_handler     /* 15 Systick */
.word _Vector_handler     /* 16 IRQ0 */
.word _Vector_handler     /* 17 IRQ1 */
.word _Vector_handler     /* 18 IRQ2 */
.word _Vector_handler     /* 19 .... */
			/* ON To IRQ67 */
.section .text
_reset:
	bl main
	b .
.thumb_func
_Vector_handler:
	b _reset