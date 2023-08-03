#include<stdio.h>

int main()
{
	int input;
	printf("Enter any number to check even or odd :-\n");
	scanf("%d",&input);
	if(input%2==0)
	{
		printf("%d is even", input);
	}
	else
	{
		printf("%d is odd", input);
	}
}