/*
 ============================================================================
 Name        : struct_ex3.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SComplex
{
	float real;
	float imaginary;
};

struct SComplex add(struct SComplex n1,struct SComplex n2);
int main()
{
	struct SComplex n1,n2,sum;
	printf("For 1st complex number \n");
	printf("Enter real and imaginary number respectively :");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&n1.real,&n1.imaginary);
	printf("For 2nd complex number \n");
	printf("Enter real and imaginary number respectively :");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&n2.real,&n2.imaginary);
	sum = add(n1,n2);
	printf("Sum = %0.1f+%0.1fi",sum.real,sum.imaginary);
	return 0;
}

struct SComplex add(struct SComplex n1,struct SComplex n2)
{
	struct SComplex sum;
	sum.real= n1.real + n2.real;
	sum.imaginary =n1.imaginary + n2.imaginary;
	return sum;
}
