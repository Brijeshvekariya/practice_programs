#include<stdio.h>
int main()
{
	int a[2];
	for(int i=0;i<3;i++)
	{
	printf("Enter values of %d sides : ",i+1);
	scanf("%d",&a[i]);
	printf("\n\n");
	}
	if(a[0] == a[1] && a[1] == a[2])
	{
		printf("Triangle is Equilateral");
	}
	else if(a[0]==a[1] || a[1] == a[2] )
	{
		printf("Triangle is isosceles");
	}
	else
	{
		printf("Triangle is Scalene");
	}
}