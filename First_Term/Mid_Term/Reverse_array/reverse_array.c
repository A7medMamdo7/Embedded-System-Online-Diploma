/*
 ============================================================================
 Name        : reverse_array.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse_array(int arr[],int );

int main()
{
	int arr[100];
	int size;
	printf("Enter size of array :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&size);
	printf("Enter the elements of array :");
	fflush(stdout);fflush(stdin);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The reverse array is --> ");
	reverse_array(arr,size);
	return 0;
}
void reverse_array(int arr[],int size)
{
	for(int i=size-1;i>=0;i--)
	{
		printf(" % d",arr[i]);
	}
}
