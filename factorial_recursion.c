// C program to find factorial using recursion.
#include<stdio.h>

int rec = 1;
void recursion(int n)
{
	if(n>0)
	{
		rec*=n;
		recursion(n-1);
	}
	else
	{
		n=1;
	}
}

int main()
{
	int n;
	printf("Enter any number to find Factorial : ");
	scanf("%d",&n);
	recursion(n);
	printf("The factorial of %d is : %d",n,rec);
}