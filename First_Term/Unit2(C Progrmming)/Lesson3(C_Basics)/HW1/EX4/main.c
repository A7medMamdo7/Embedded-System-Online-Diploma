/*
 * main.c
 *
 *  Created on: Feb 19, 2023
 *      Author: Dell
 */

#include <stdio.h>
void main()
{
	float x,y;
	float product;
	printf("Enter two numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("product: %f",product=x*y);
}
