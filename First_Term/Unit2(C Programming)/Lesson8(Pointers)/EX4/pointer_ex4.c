/*
 ============================================================================
 Name        : pointer_ex4.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[20];
	int* ptr =arr;
	int input ;
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&input);
	printf("Input %d number of elements in the array : \n",input);
	for(int i =0;i<input;i++)
	{
		printf("Element-%d : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",ptr);
		ptr++;
	}

	ptr = &arr[input-1];
	for(int i=input;i>0;i--)
	{
		printf("Element in array %d : %d \n",i,*ptr);
		ptr--;
	}
	return 0;
}
