/*
 * main.c
 *
 *  Created on: Feb 20, 2023
 *      Author: Dell
 */
#include <stdio.h>
void main()
{
	char x ;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	if (x>='a'&& x<='z')
		printf("%c is an alphabet",x);
	else
		printf("%c is not an alphabet",x);
}

