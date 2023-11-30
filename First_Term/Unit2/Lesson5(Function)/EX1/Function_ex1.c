/*
 ============================================================================
 Name        : Function_ex1.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int prime_num(int x);
int main(void)
{
	int x ,y;
	int flag;
	printf("Enter two number (intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("prime numbers between %d and %d are :",x,y);
	for(int i=x+1;i<y;i++)
	{
		flag = prime_num(i);
		if(flag ==0)
			printf(" %d ",i);
	}

	return 0;
}

int prime_num(int num)
{
	int flag=0;
	for(int i=2;i<num;i++)
	{
		if(num % i ==0)
		{
			flag =1;
			break;
		}
	}
	return flag;
}
