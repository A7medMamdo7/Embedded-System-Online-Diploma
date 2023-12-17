/*
 * main.c
 *
 *  Created on: Feb 20, 2023
 *      Author: Dell
 */

#include <stdio.h>
void main()
{
	float a , b , temp ;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	temp = a + b ;
	a = temp - a ;
	b = temp - b ;
	printf("\nAfter swapping, value of a = %.2f",a);
	printf("\nAfter swapping, value of b = %.2f",b);
}
