#include<stdio.h>
int factorial(int n)
{
	int fac=1;
	while(n>0)
	{
		fac=fac*n;
		n--;
	
	}
	return fac;
}

int main()
{
	int a;
	printf("Enter Any Numbers : ");
	scanf("%d",&a);
	printf("Factorial is : %d",factorial(a));
}