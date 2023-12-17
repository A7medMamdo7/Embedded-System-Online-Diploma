/*
 ============================================================================
 Name        : sum_numbers.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sum_func (int n1 , int n2);
int main()
{
	int n1 ,n2 ;
	printf("Enter two integer number : ");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&n1,&n2);
	printf("sum numbers from %d to %d = %d",n1,n2,sum_func(n2,n1));
}
int sum_func (int num , int sum )
{
	sum+=num;
	num--;
	if(num!=0)
		return sum_func(num,sum);
	return sum;
}
