/*
 ============================================================================
 Name        : count_ones.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int binary_func(int);
int main()
{
	int input ;
	int count;
	printf("Enter an integer number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&input);
	count = binary_func(input);
	printf("The number of ones in binary number of (%d) ---> %d",input,count);
	return 0;
}
int binary_func(int input)
{
	int count =0;
	for(unsigned int i = 1<<31;i>0;i=i/2)
	{
		if((input & i) && 1)
			count++;
	}
	return count;
}
