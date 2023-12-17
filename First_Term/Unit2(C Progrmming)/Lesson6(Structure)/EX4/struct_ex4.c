/*
 ============================================================================
 Name        : struct_ex4.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SStudent{
	char name[100];
	int roll;
	float marks;
};
int main()
{
	struct SStudent arr[10];
	printf("Enter information of students : \n");
	for (int i=0;i<10;i++)
	{
		arr[i].roll =i+1;
		printf("For roll number %d \n",arr[i].roll);
		printf("Enter name : ");
		fflush(stdin);fflush(stdout);
		scanf("%s",arr[i].name);
		printf("Enter marks : ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i].marks);
	}
	printf("Displaying information of students :\n");
	for(int i=0; i<10;i++)
	{
		printf("Information for roll number %d : \n",arr[i].roll);
		printf("Name : %s \n",arr[i].name);
		printf("Marks : %0.2f \n",arr[i].marks);
	}
	return 0;
}
