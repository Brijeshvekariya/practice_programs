#include<stdio.h>

int main()
{
	int input;
	printf("Enter any number : ");
	scanf("%d",&input);
	(input>=0) ? printf("%d is positive",input) : printf("%d is negative",input);
}