#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[34];
    char address[100];
    int age;
}e1,e2,e3,e4,e5;

void input()
{
	e1.id = 1;
	printf("Enter details of employee %d: \n",e1.id);
	printf("Employee name : ");
	gets(e1.name);
	printf("Employee age : ");
	scanf("%d",&e1.age);
	printf("Employee Address : ");
	fflush(stdin);
	gets(e1.address);
	e2.id = 2;
	printf("\n\nEnter details of employee %d: \n",e2.id);
	printf("Employee name : ");
	gets(e2.name);
	printf("Employee age : ");
	scanf("%d",&e2.age);
	printf("Employee Address : ");
	fflush(stdin);
	gets(e2.address);
	e3.id = 3;
	printf("\n\nEnter details of employee %d: \n",e3.id);
	printf("Employee name : ");
	gets(e3.name);
	printf("Employee age : ");
	scanf("%d",&e3.age);
	printf("Employee Address : ");
	fflush(stdin);
	gets(e3.address);
	e4.id = 4;
	printf("\n\nEnter details of employee %d: \n",e4.id);
	printf("Employee name : ");
	gets(e4.name);
	printf("Employee age : ");
	scanf("%d",&e4.age);
	printf("Employee Address : ");
	fflush(stdin);
	gets(e4.address);
	e5.id = 5;
	printf("\n\nEnter details of employee %d: \n",e5.id);
	printf("Employee name : ");
	gets(e5.name);
	printf("Employee age : ");
	scanf("%d",&e5.age);
	printf("Employee Address : ");
	fflush(stdin);
	gets(e5.address);
}

void display()
{
	printf("\n\nAll Five Employee details is : ");
    printf("\n\nEmployee ID is : %d\n", e1.id);
    printf("Employee name is : %s\n", e1.name);
    printf("Employee age is : %d\n", e1.age);
    printf("Employee address is : %s\n\n\n", e1.address);
    printf(" Employee ID is : %d\n", e2.id);
    printf("Employee name is : %s\n", e2.name);
    printf("Employee age is : %d\n", e2.age);
    printf("Employee address is : %s\n\n\n", e2.address);
    printf(" Employee ID is : %d\n", e3.id);
    printf("Employee name is : %s\n", e3.name);
    printf("Employee age is : %d\n", e3.age);
    printf("Employee address is : %s\n\n\n", e3.address);
    printf(" Employee ID is : %d\n", e4.id);
    printf("Employee name is : %s\n", e4.name);
    printf("Employee age is : %d\n", e4.age);
    printf("Employee address is : %s\n\n\n", e4.address);
    printf(" Employee ID is : %d\n", e5.id);
    printf("Employee name is : %s\n", e5.name);
    printf("Employee age is : %d\n", e5.age);
    printf("Employee address is : %s\n\n\n", e5.address);
	
}
int main()
{
	input();
	display();
}
