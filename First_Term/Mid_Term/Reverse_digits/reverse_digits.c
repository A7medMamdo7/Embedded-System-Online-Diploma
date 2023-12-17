/*
 ============================================================================
 Name        : reverse_digits.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void reverse_digit_fun(int);
int main()
{
	int input = 123;

	printf("Enter a number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&input);
	printf("reverse of digits (%d) = ",input);
	reverse_digit_fun(input);
	return 0;
}
void reverse_digit_fun(int input)
{
	int mod;
	while(input !=0)
	{
		mod =input%10;
		printf("%d",mod);
		input = input/10;
	}
}
