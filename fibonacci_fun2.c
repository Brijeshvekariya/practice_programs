<<<<<<< HEAD
#include<stdio.h>

int fib(int n)
{
	int num1 = 0,num2 = 1,num3;
	printf("The fibanocci series is : ");
	for(int i = 1;i<n;i++)
	{
		printf(" %d  ",num1);
		num3 = num1+num2;
		num1 = num2;
		num2 = num3;
	}
}
int main()
{
	int n;
	printf("Enter numbers of elements : ");
	scanf("%d",&n);
	fib(n);
=======
#include<stdio.h>

int fib(int n)
{
	int num1 = 0,num2 = 1,num3;
	printf("The fibanocci series is : ");
	for(int i = 1;i<n;i++)
	{
		printf(" %d  ",num1);
		num3 = num1+num2;
		num1 = num2;
		num2 = num3;
	}
}
int main()
{
	int n;
	printf("Enter numbers of elements : ");
	scanf("%d",&n);
	fib(n);
>>>>>>> 1148652c7f41421d34c03e0a4896cb4e73332055
}