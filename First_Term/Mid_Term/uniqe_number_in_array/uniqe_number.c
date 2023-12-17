/*
 ============================================================================
 Name        : uniqe_number.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void unique_num_func( int arr[] , int size );
int main()
{
	int arr[100];
	int size;
	printf("Enter size of array :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&size);
	printf("Enter elements of array :");
	fflush(stdout);fflush(stdin);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	unique_num_func(arr,size);

	return 0;
}
void unique_num_func(int arr[] , int size)
{
	int x=0;
	for(int i=0;i<size;i++)
	{
		x ^= arr[i];
	}
	printf("Unique number is : %d",x);
}
//size of array should be odd number
