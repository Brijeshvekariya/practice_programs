#include<stdio.h>

int main()
{
	int input,prime1=0,prine2;	
	printf("Enter any number : ");
	scanf("%d",&input);
	if(input==0 || input==1)
	{
		prime1=1;
	}
	for(int i=2;i<input;++i)
	{
		if(input%i==0)
		{
			prime1=1;
		}
	}
	(prime1!=0) ? printf("%d is not prime number ",input) : printf("%d is prime number",input);
}
//	}
//	else
//	{
//		prime1=1;
//	}