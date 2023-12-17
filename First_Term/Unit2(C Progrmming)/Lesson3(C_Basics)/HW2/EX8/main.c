/*
 * main.c
 *
 *  Created on: Feb 22, 2023
 *      Author: Dell
 */
#include <stdio.h>
void main()
{
	char operator ;
	float sum;
	float x,y;
	printf("Enter either + or - or * or divide:  ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&operator);
	printf("Enter two number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	switch(operator)
	{
	case '+':
		sum = x+y;
		printf("%f + %f= %f",x,y,sum);
		break;
	case '-':
		sum =x-y;
		printf("%f - %f= %f",x,y,sum);
		break;

	case '*':
		sum = x*y;
		printf("%f * %f= %f",x,y,sum);
		break;
	case '/':
		sum = x/y;
		printf("%f / %f= %f",x,y,sum);
		break;
	}

}

