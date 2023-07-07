#include<stdio.h>

int main()
{
	int input1,input2,prime1=0,prine2;	
	printf("Enter First number : ");
	scanf("%d",&input1);
	printf("Enter last number number : ");
	scanf("%d",&input2);
	for(int i=input1;i<=input2;++i)
	{ 
		for(int j = 2;j<i;++j)
		{
			if(i%j==0)
			{
				prime1=1;
				break;
			}
			prime1=0;
//			printf("%d is prime1\n",prime1);
		}
		if(prime1==0)
		{
			printf("%d \n",i);
		}
		
	}
	printf("These all are the prime numbers from %d to %d",input1,input2);
//	printf("prme1 is %d",prime1);
//	(prime1!=0) ? printf("%d is not prime number ",input) : printf("%d is prime number",input);
}