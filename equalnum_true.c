#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter values of a : ");
	scanf("%d",&a);
	printf("Enter values of b : ");
	scanf("%d",&b);
	printf("\n\n");
	if(a == b || a+b == 5 || a-b==5)
	{
		printf("True\n\n");
	}
	else
	{
		printf("False\n\n");
	}
}