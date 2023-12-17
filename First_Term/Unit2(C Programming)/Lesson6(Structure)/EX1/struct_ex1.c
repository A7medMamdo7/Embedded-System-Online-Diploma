/*
 ============================================================================
 Name        : struct_ex1.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SStudent{
	char name[100];
	int roll;
	float marks;
} s ;


int main()
{
	printf("Enter information of students : \n");
	printf("Enter name : ");
	fflush(stdin);fflush(stdout);
	gets(s.name);
	printf("Enter roll number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&s.roll);
	printf("Enter marks : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&s.marks);
	printf("Displaying information \n");
	printf("the name : %s \n",s.name);
	printf("the Roll : %d \n",s.roll);
	printf("the marks : %f",s.marks);
	return 0;
}
