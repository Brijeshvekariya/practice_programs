<<<<<<< HEAD
#include<stdio.h>

void even(int n)
{
	if(n%2==0)
	{
		printf("%d is even",n);
	}
	else
	{
		printf("%d is odd",n);
	}
}

int main()
{
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	even(n);
=======
#include<stdio.h>

void even(int n)
{
	if(n%2==0)
	{
		printf("%d is even",n);
	}
	else
	{
		printf("%d is odd",n);
	}
}

int main()
{
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	even(n);
>>>>>>> 1148652c7f41421d34c03e0a4896cb4e73332055
}