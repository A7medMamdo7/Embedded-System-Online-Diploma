/*
 ============================================================================
 Name        : reverse_word.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse_word (char x[] , int size);
int main()
{
	char str1[100];
	printf("Enter your name : ");
	fflush(stdin);fflush(stdout);
	gets(str1);
	printf("The reversed name : ");
	reverse_word(str1,strlen(str1));
	return 0;
}
void reverse_word (char x[] , int size)
{
	int c = size - 1;
	int count = 0;
	for (int i=c ; i>=0 ;i--){
		count++;
		if ( x[i] == ' '){
			for (int j = i; j<((count-1)+i);j++){
				printf("%c" , (x[j+1]));
				fflush(stdin); fflush(stdout);
			}
			printf(" ");
			count = 0;
		}
		if (i == 0){
			for (int j = i; j<(count);j++){
				printf("%c" , (x[j]));
				fflush(stdin); fflush(stdout);
			}
			count = 0;
		}
	}
}
