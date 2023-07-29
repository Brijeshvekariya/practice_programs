#include<stdio.h>
int main()
{
	char a[100];
	printf("Enter traffic light colour : ");
	gets(a);
	printf("\n\n");
	if(a[0] == 'R' || a[0] == 'r')
	{
		printf("Stop Vehicle\n\n");
	}
	else if(a[0] == 'y' || a[0] == 'Y')
	{
		printf("Stop And Then Go\n\n");
	}
	else if(a[0] == 'G' || a[0] == 'g')
	{
		printf("You Can Go\n\n");
	}
	else
	{
		printf("Enter valid colour");
	}
}