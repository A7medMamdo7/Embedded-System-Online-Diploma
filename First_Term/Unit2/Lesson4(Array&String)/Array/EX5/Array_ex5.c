/*
 ============================================================================
 Name        : Array_ex5.c
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
	int n,searched_num;
	int i=0;
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
	printf("Enter the element to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&searched_num);
	while(i<n && searched_num!=arr[i])
		i++;

	if(arr[i]==searched_num)
	{
		printf("Number found at the location = %d ",i+1);
	}
	else
	{
		printf("Number not found");
	}
	return 0;
}
