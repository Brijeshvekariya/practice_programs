#include<stdio.h>

int main()
{
	int number,fact = 1;
	printf("Enter any number : ");
	scanf(" %d",&number);
	if(number>0)
	{
	for(int i=number;i>=1;i--)
	{
		fact *= i;
	}
	printf("The Factorial of %d is : %d",number,fact);
	}
	else 
	{	
		printf("The Factorial of %d is : %d",number,fact);
	}
}