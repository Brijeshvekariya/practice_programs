#include<stdio.h>

int area(int r)
{
	float pi = 3.14;
	return pi*r*r;
}

int main()
{
	int r;
	printf("Enter the radius : ");
	scanf("%d",&r);
	printf("\n\nThe Area of Circle : %d",area(r));
}