#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[34];
    char address[100];
    int age;
}e1;

union student
{
	int id;
	char name[34];
	char address[100];
	int age;
}s1;

int main()
{
	int a;
	char b[100];
	char c[34];
	int d;
	printf("The main difference between structure and union is in memory allocation. \n");
	printf("\n\n");
	printf("The memory allocation of structure is : %d bytes\n\n",sizeof(struct employee));
	printf("The memory allocation of Union is : %d bytes\n\n",sizeof(union student));
	printf("In structure we get different memory allocation for all variables. \n");
	printf("While in Union we get same memory allocation for all variables. \n");
	
}
