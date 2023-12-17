/*
 ============================================================================
 Name        : String_ex3.c
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
	char rev[100];
	int j=0;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(arr);
	for(int i=strlen(arr)-1;arr[i]!='\0';i--,j++)
	{
		rev[j]=arr[i];
	}
	rev[j]='\0';
	printf("Reverse of string: %s",rev);
	return 0;
}
