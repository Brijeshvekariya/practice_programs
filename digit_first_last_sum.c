#include<stdio.h>

int total=0,n;
int sum(int n)
{
	if(n<0)
	{
		n= -n;
	}
	int remainder;
	remainder = n%10;
	total+=remainder;
	while(n>0)
	{
		n = n/10;
		if(n<10)
		{
		remainder = n%10;
		total+=remainder;
		}
	}
	printf("Total of First and last digit is %d",total);
}
int main()
{
	printf("Enter any number to find out maximum among them : ");
	scanf("%d",&n);
	sum(n);
}