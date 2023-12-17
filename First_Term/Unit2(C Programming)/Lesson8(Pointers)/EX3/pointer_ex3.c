/*
 ============================================================================
 Name        : pointer_ex3.c
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
	char x[20] , y[20];
	char *ptr =x;
	char *rvptr=y;
	int count=0;
	printf("Input a string: ");
	fflush(stdin);fflush(stdout);
	scanf("%s",x);
	while(*ptr)
	{
		ptr++;
		count++;
	}
	while(count>=0)
	{
		ptr--;
		*rvptr=*ptr;
		count--;
		rvptr++;
	}
	*rvptr='\0';
	printf("Reverse string is : %s",y);

	return 0;
}
