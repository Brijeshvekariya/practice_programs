#include<stdio.h>

int main()
{
	int input1,input2;
	printf("Enter the value of dividend :- ");
	scanf("%d",&input1);
	printf("Enter the value of divisor :- ");
	scanf("%d",&input2);
	printf("The Quotient of given value is :- %d\n",input1/input2);
	printf("The Remainder of given value is :- %d",input1%input2);
	
}
/*

Another Method to solve the problem using 2 more variables.

#include<stdio.h>

int main()
{
	int input1,input2;
	printf("Enter the value of dividend :- ");
	scanf("%d",&input1);
	printf("Enter the value of divisor :- ");
	scanf("%d",&input2);
	int a,b;
	a=input1/input2;
	b=input1%input2;
	printf("The Quotient of given value is :- %d\n",a);
	printf("The Remainder of given value is :- %d",b);
}
*/