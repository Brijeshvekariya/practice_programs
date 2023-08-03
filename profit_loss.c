#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter Cost price : ");
	scanf("%d",&a);
	printf("Enter Selling price : ");
	scanf("%d",&b);
	printf("\n\n");
	if(a<b)
	{
		printf("Profit\n\n");
	}
	else if(a==b)
	{
		printf("Neither profit nor Loss\n\n");
	}
	else
	{
		printf("Loss\n\n");
	}
}