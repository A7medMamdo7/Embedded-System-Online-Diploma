/*
 ============================================================================
 Name        : sum_all_digits.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sum_all_digit_fun(int);
int main()
{
	int input = 123;

	printf("Enter a number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&input);
	sum_all_digit_fun(input);
	return 0;
}
void sum_all_digit_fun(int input)
{
	int sum =0;
	int mod;
	while(input !=0)
	{
		mod =input%10;
		sum +=mod;
		input = input/10;
	}
	printf("Sum of all digits = %d ",sum);
}
