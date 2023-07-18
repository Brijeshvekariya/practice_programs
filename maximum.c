#include<stdio.h>

int max=0;
int maximum(int n)
{
	if(n<0)
	{
		n= -n;
	}
	while(n>0)
	{
		int remainder;
		remainder = n%10;
		if(remainder >= max)
		{
			max = remainder;
		} 
		n = n/10;
	}
	printf("Maximum is %d",max);
}
int main()
{
	int n;
	printf("Enter any number to find out maximum among them : ");
	scanf("%d",&n);
	maximum(n);
}