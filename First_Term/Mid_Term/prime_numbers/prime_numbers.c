/*
 ============================================================================
 Name        : prime_numbers.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int prime_num_fun(int);
int main()
{
	int n1 , n2 ,flag ;
	printf("Enter two integer numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&n1,&n2);
	printf("prime numbers between %d and %d are :",n1,n2);
	for(int i=n1;i<n2;i++)
	{
		flag = prime_num_fun(i);
		if(flag ==0)
			printf(" %d ",i);
	}
	return 0;
}
int prime_num_fun(int num)
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

