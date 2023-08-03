#include<stdio.h>

int main()
{
	int input;
	printf("Enter any number :- ");
	scanf("%d",&input);
	if(input>=0)
	{
		printf("%d is positive",input);
	}
	else
	{
		printf("%d is negative",input);
	}
}