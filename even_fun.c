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
}