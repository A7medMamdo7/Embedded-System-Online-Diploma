/*
 ============================================================================
 Name        : Square_root.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void square_root_fun(int);
int main()
{
	int x;

	printf("Enter an integer number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	square_root_fun(x);
	return 0;
}
void square_root_fun(int x)
{
	double square_root_x;
	square_root_x = sqrt(x);
	printf("square root of an integer number (%d) = %0.2lf",x,square_root_x);
}
