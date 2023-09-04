#include<stdio.h>

	int fact = 1;
int fac(int n)
{
	if(n>0)
	{
		fact = fact * n;
		fac(n-1);
		
	}
	return fact;
}
int main()
{
	int n;
	printf("Enter any Number : ");
	scanf("%d",&n);
	printf("factorial of %d is %d",n,fac(n));
}