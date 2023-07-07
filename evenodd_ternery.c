#include<stdio.h>

int main()
{
	int input;
	printf("Enter any number : ");
	scanf("%d",&input);
	(input%2==0) ? printf("%d is Even ",input) : printf("%d is Odd ",input);
}