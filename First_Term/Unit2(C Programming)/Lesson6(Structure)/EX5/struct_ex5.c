/*
 ============================================================================
 Name        : struct_ex5.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define pi 3.14
#define area(r)(pi*r*r)


int main()
{
	int radius;
	float area;
	printf("Enter the radius : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&radius);
	area =area(radius);
	printf("Area = %0.2f",area);

	return 0;
}
