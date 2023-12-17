/*
 * main.c
 *
 *  Created on: Feb 22, 2023
 *      Author: Dell
 */
#include <stdio.h>
void main()
{
	signed int x;
	long int sum =1;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x>0)
	{
		for(int i=1;i<=x;i++)
		{
			sum *=i;
		}
		printf("Factorial = %d",sum);
	}
	else if(x<0)
	{
		printf("Error!!! Factorial of negative number doesn't exist");
	}
	else
		printf("Factorial = 1");
}

