#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	int ab;
	int input1,input2;
	printf("Welcome to Simple Calculator \n");
	printf("\n");
	printf("Enter any two numbers \n");
	scanf("%d %d",&input1,&input2);
	printf("press 1 for addition\n");
	printf("press 2 for subtraction\n");
	printf("press 3 for multiplication\n");
	printf("press 4 for division\n");
	printf("press 5 for modulo\n");
	scanf("%d",&ab);
	printf("Enter any two numbers \n");
	scanf("%d %d",&input1,&input2);
	a= input1+input2;
	b= input1-input2;
	c= input1*input2;
	d= input1/input2;
	e= input1%input2;
	if(ab==1)
	{
		printf("Addition of %d and %d is %d\n",input1,input2,a);
	
	}
	if(ab==2)	
	{
		printf("Subtraction of %d and %d is %d\n",input1,input2,b);
		
	}
	if(ab==3)
	{
		printf("Multiplication of %d and %d is %d\n",input1,input2,c);
		
	}
	if(ab==4)
	{
		printf("Division of %d and %d is %d\n",input1,input2,d);
	
	}
	if(ab==5)
	{
		printf("Modulo/remainder of %d and %d is %d\n",input1,input2,e);
	
	}
	printf("Addition of %d and %d is %d\n",input1,input2,a);
	printf("Subtraction of %d and %d is %d\n",input1,input2,b);
	printf("Multiplication of %d and %d is %d\n",input1,input2,c);
	printf("Division of %d and %d is %d\n",input1,input2,d);
	printf("Modulo/remainder of %d and %d is %d\n",input1,input2,e);
	
	
}