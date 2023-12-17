/*
 ============================================================================
 Name        : Array_ex2.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	float arr[100];
	float average,sum;
	printf("Enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if(n>100||n<0)
	{
		printf("error!!! number should be in range(0-100)");
		printf("please enter another number: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&n);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	average=sum/n;
	printf("sum = %.2f \n",sum);
	printf("Average = %.2f \n",average);
	return 0;
}

