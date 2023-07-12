#include<stdio.h>

int rever=0,n;
int reverse(int n)
{
	if(n<0)
	{
		n= -n;
	}
	while(n>0)
	{
		int remainder;
		remainder = n%10;
		rever = rever*10 + remainder;
		n = n/10;
	}
	printf("The reverse number is %d",rever);
}
int main()
{
	printf("Enter any number to reverse : ");
	scanf("%d",&n);
	reverse(n);
}