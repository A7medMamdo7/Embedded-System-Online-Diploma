/*
 ============================================================================
 Name        : String_ex1.c
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
	char input;
	int freq=0;
	printf("Enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(arr);
	printf("%s \n",arr);
	printf("Enter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&input);
	for(int i =0; arr[i]!='\0';i++)
	{
		if(arr[i]==input)
			freq++;
	}
	printf("Frequency of %c = %d",input,freq);
	return 0;
}
