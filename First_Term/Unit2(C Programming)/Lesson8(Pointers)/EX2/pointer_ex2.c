/*
 ============================================================================
 Name        : pointer_ex2.c
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
	char arr[26];
	char *ptr =arr;
	for(int i=0;i<26;i++)
	{
		*ptr = i +'A';
		ptr++;
	}
	ptr =arr;
	for(int i=0;i<26;i++)
	{
		printf(" %c ",*ptr);
		ptr++;
	}
	return 0;
}
