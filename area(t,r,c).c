#include<stdio.h>

int main()
{
	float rectangle,circle,triangle;
	int l,b,r,choice,h,base;
	float pi=3.14;
	printf("--------Welcome--------\n");
	printf("Choice from below options :-\n");
	printf("1. Area of circle\n2.Area of Rectangle\n3.Area of Triangle\n4.All\n");
	printf("\n");
	printf("Enter your choice :- ");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("\n");
		printf("Enter radius :- ");
		scanf("%d",&r);
		circle = pi*r*r;
		printf("Area of circle = %f\n",circle); 
	}
	else if(choice==2)
	{
		printf("Enter length and breadth of rectangle :- ");
		scanf("%d %d",&l,&b);
		rectangle = l*b;
		printf("Area of rectangle = %f\n",rectangle);
	}
	else if(choice==3)
	{
		printf("Enter length and height of triangle :- ");
		scanf("%d %d",&base,&h);
		triangle = base*h/2;
		printf("Area of Triangle = %f\n",triangle);
	}
	else if(choice==4)
	{
		printf("\n");
		printf("Enter radius :- ");
		scanf("%d",&r);
		circle = pi*r*r;
		printf("Area of circle = %f\n",circle); 
		
		printf("Enter length and breadth of rectangle :- ");
		scanf("%d %d",&l,&b);
		rectangle = l*b;
		printf("Area of rectangle = %f\n",rectangle);
		
		printf("Enter length and height of triangle :- ");
		scanf("%d %d",&base,&h);
		triangle = base*h/2;
		printf("Area of Triangle = %f\n",triangle);
	}
	else
	{
		printf("Enter valid input");
	}
	
}