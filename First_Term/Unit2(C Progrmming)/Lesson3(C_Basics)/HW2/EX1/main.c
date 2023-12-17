/*
 * main.c
 *
 *  Created on: Feb 20, 2023
 *      Author: Dell
 */
#include <stdio.h>
void main()
{
	int a ;
	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is even",a);
	}
	else
	{
		printf("%d is odd",a);
	}
}
