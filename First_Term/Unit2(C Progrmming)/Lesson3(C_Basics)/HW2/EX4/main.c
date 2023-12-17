/*
 * main.c
 *
 *  Created on: Feb 20, 2023
 *      Author: Dell
 */
#include <stdio.h>
void main()
{
	float a;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	if(a>0)
		printf("%f is positive",a);
	else if(a<0)
		printf("%f is negative",a);
	else
		printf("you entered zero");
}

