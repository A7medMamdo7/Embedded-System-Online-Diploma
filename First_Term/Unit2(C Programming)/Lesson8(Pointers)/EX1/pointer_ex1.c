/*
 ============================================================================
 Name        : pointer_ex1.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m = 29;
	printf("Address of m : 0x%p \n",&m);
	printf("Value of m : %d \n",m);
//	ptr is assigned with the address of m
	int* ptr =&m;
	printf("Address of ptr : 0x%p \n",ptr);
	printf("Value of ptr : %d \n",*ptr);
// 	The value of m assigned to 34 now.
	m=34;
	printf("Address of ptr : 0x%p \n",ptr);
	printf("Value of ptr : %d \n",*ptr);
//	The pointer variable ptr is assigned with the
//	value 7 now.
	*ptr = 7;
	printf("Address of m : 0x%p \n",&m);
	printf("Value of m : %d \n",m);
	return 0;
}
