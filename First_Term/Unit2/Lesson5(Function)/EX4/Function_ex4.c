/*
 ============================================================================
 Name        : Function_ex4.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int	multiply(int x,int y);
int main(void)
{
	int base,power,z;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&power);
	z=multiply(base,power);
	printf("%d ^ %d = %d",base,power,z);




	return 0;
}
int	multiply(int base,int power)
{
	int z=0;
	if(power!=0)
	{
		z=base*multiply(base,power-1);
	}
	else
		z=1;
	return z;
}
