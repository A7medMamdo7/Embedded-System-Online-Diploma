/*
 ============================================================================
 Name        : Array_ex3.c
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
	int matrix[20][20];
	int x , y ;
	printf("Enter rows and columns of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d ",&x,&y);
	if((x>20||x<0) && (y>20||y<0))
	{
		printf("error!!! number should be in range(1-20)");
		printf("please enter another number: ");
		fflush(stdin);fflush(stdout);
		scanf("%d %d",&x,&y);
	}
	printf("Enter elements of matrix: \n");
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Entered matrix: \n");
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("%d \t",matrix[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matrix:\n");
	for(int i=0;i<y;i++)
	{
		for(int j=0;j<x;j++)
		{
			printf("%d\t",matrix[j][i]);
		}
		printf("\n");
	}
	return 0;
}
