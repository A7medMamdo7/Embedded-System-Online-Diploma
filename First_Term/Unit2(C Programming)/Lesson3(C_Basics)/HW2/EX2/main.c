/*
 * main.c
 *
 *  Created on: Feb 20, 2023
 *      Author: Dell
 */
#include <stdio.h>
void main ()
{
	char x ;
	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	if(x =='a' || x =='i' || x =='e' || x =='o' || x =='u')
		printf("%C is a vowel",x);
	else
		printf("%c is a consonant",x);
}

