/*
 * main.c
 *
 *  Created on: Feb 20, 2023
 *      Author: Dell
 */

#include <stdio.h>
void main()
{
	float a , b;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	a = a + b ;
	b = a - b ;
	a = a - b ;
	printf("\nAfter swapping, value of a = %.2f",a);
	printf("\nAfter swapping, value of b = %.2f",b);
}
