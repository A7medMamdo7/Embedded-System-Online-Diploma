/*
 ============================================================================
 Name        : struct_ex2.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SDistance{
	int feet;
	float inch;
} d1,d2,sum ;


int main()
{
	printf("Enter information of 1st distance : \n");
	printf("Enter feet : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d1.feet);
	printf("Enter inch : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d1.inch);
	printf("Enter information of 2nd distance :\n");
	printf("Enter feet : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d2.feet);
	printf("Enter inch : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d2.inch);
	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;
	if(sum.inch>12.0)
	{
		sum.inch-=12.0;
		sum.feet++;
	}
	printf("Sum of distance = %d\'---%0.1f\"",sum.feet,sum.inch);
	return 0;
}

