/*
 * main.c
 *
 *  Created on: Feb 20, 2023
 *      Author: Dell
 */

#include <stdio.h>
void main()
{
	int x ;
	int sum=0;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	for(int i=0;i<=x;i++)
	{
		sum+=i;
	}
	printf("sum = %d",sum);
}
