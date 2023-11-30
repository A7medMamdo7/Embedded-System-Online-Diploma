/*
 * main.c
 *
 *  Created on: Feb 19, 2023
 *      Author: Dell
 */

#include <stdio.h>

void main ()
{
	int x , y ;
	int sum ;
	printf("Enter two integers : ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("sum: %d",sum=x+y);
}
