/*
 ============================================================================
 Name        : Array_ex4.c
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
	int n,inserted_num,location;
	int arr[20];
	printf("Enter no. of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");
	printf("Enter the element to be inserted :");
	fflush(stdin);fflush(stdout);
	scanf(" %d ",&inserted_num);
	printf("Enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf(" %d ",&location);
	for(int i=0;i<n;i++)
	{
		if(i==location-1)
		{
			printf(" %d ",inserted_num);
		}
		printf(" %d ",arr[i]);
	}
	return 0;
}
