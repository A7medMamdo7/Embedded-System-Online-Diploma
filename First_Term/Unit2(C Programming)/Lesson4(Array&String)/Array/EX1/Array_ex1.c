/*
 ============================================================================
 Name        : Array_ex1.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float m[2][2];
	float x[2][2];
	float sum[2][2];
	printf("Enter the elements of 1st matrix \n");
	fflush(stdin);fflush(stdout);
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter m%d%d :",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&m[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix \n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter x%d%d :",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&x[i][j]);
		}
	}
	printf("Sum of matrix: \n");
	for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
			{
			sum[i][j]=m[i][j]+x[i][j];
			printf("%.1f \t ",sum[i][j]);
			}
			printf("\n");
		}

	return 0;
}
