#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[34];
    char address[100];
    int age;
}e1;

void input()
{
	
}
int main()
{
	e1.id = 1;
	printf("Enter details of employee : \n");
	printf("Employee name : ");
	gets(e1.name);
	printf("Employee age : ");
	scanf("%d",&e1.age);
	printf("Employee Address : ");
	fflush(stdin);
	gets(e1.address);
	printf("\n\nThe details of 1 employee : \n\n");
    printf("Employee ID is : %d\n", e1.id);
    printf("Employee name is : %s\n", e1.name);
    printf("Employee age is : %d\n", e1.age);
    printf("Employee address is : %s\n", e1.address);
}
