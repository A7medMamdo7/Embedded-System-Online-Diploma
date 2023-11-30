/*
 ============================================================================
 Name        : Function_ex3.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Reverse();
int main()
{

	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	Reverse();
	return 0;
}
void Reverse()
{
	char x;
	scanf("%c",&x);
	if (x !='\n')
	{
		Reverse();
		printf("%c",x);
	}
}

