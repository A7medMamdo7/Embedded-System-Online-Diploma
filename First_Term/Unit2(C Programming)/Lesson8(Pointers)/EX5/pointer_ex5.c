/*
 ============================================================================
 Name        : pointer_ex5.c
 Author      : Ahmed Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Semployee{
	char* name;
	int id;
};

int main()
{
	struct Semployee emp1={"Ahmed",100},emp2={"mohamed",120},emp3={"hesham",130};
	struct Semployee *arr[]={&emp1,&emp2,&emp3};
	struct Semployee (*(*ptr)[3])=&arr;
	printf("employee -1- name : %s \n",(**ptr)->name);
	printf("employee -1- ID : %d ",(**ptr)->id);
	return 0;
}
