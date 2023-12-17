/*
 ============================================================================
 Name        : max_ones.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int max_ones(int);
int max =0;
int count=0;
int main()
{
	int input ;
	printf("Enter an integer number : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&input);
	printf("The max ones in the number (%d) is ---> %d ",input,max_ones(input));
	return 0;
}
int max_ones(int input)
{
	if(input==0)
	{
		if(count>max)
			max=count;

		return 0;
	}
	if(input%2==0)
	{
		if(count>max)
			max=count;

		count=0;
	}
	if(input%2==1)
		count++;

	max_ones(input/2);
	return max;
}
