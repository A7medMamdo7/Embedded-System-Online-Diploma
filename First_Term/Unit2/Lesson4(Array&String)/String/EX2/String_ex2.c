/*
 ============================================================================
 Name        : String_ex2.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char arr[100];
	int count=0;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(arr);
	for(int i=0;arr[i]!='\0';i++)
	{
		count++;
	}
	printf("Length of string: %d",count);
	return 0;
}
