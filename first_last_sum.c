<<<<<<< HEAD
#include<stdio.h>

void reverse()
{
	int n,rem,sum=0;
	printf("Enter any number : ");
	scanf("%d",&n);
	while(n>0)
	{
		rem = n%10;
		n=n/10;
		sum+=rem;
		while(n>10)
		{
			n/=10;
		}
	
		
	}
	printf("Total Sum is : %d",sum);
}
int main()
{
	reverse();
=======
#include<stdio.h>

void reverse()
{
	int n,rem,sum=0;
	printf("Enter any number : ");
	scanf("%d",&n);
	while(n>0)
	{
		rem = n%10;
		n=n/10;
		sum+=rem;
		while(n>10)
		{
			n/=10;
		}
	
		
	}
	printf("Total Sum is : %d",sum);
}
int main()
{
	reverse();
>>>>>>> 1148652c7f41421d34c03e0a4896cb4e73332055
}