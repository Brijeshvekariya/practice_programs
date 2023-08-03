#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	int input1,input2;
	printf("Welcome to Simple Calculator \n");
	printf("\n");
	printf("Enter any two numbers \n");
	scanf("%d %d",&input1,&input2);
	a= input1+input2;
	b= input1-input2;
	c= input1*input2;
	d= input1/input2;
	e= input1%input2;
	printf("Addition of %d and %d is %d\n",input1,input2,a);
	printf("Subtraction of %d and %d is %d\n",input1,input2,b);
	printf("Multiplication of %d and %d is %d\n",input1,input2,c);
	printf("Division of %d and %d is %d\n",input1,input2,d);
	printf("Modulo/remainder of %d and %d is %d\n",input1,input2,e);
	
	
}