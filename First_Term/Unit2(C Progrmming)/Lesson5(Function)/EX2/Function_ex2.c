/*
 ============================================================================
 Name        : Function_ex2.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Factorial(int num);

int main(void)
{
	int x ;
	printf("Enter a positive number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("Factorial of %d = %d ",x,Factorial(x));

	return 0;
}

int Factorial(int num)
{
	int y=1;
	if(num>0)
	{
		 y= num*Factorial(num-1);
	}
		 return y;
}
