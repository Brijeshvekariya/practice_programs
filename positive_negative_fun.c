#include<stdio.h>

void positive(int n)
{
	if(n>=0)
	{
		printf("%d is positive",n);
	}
	else
	{
		printf("%d is negative",n);
	}
}

int main()
{
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	positive(n);
}
