#include<stdio.h>

int main()
{
	int a,b,c,d,e,choice;
	int input1,input2;
	printf("------------ Welcome ------------ \n");
	printf("\nWelcome to Simple Calculator \n");
	printf("\nChoose any one option from below options :\n");
	printf("1. Addition \n2.Subtraction\n3.Multiplication \n4.Division \n5.modulo/remainder \n6.all \n");
	printf("\nEnter your choice :- ");
	scanf("%d",&choice);
	printf("\nEnter First number :- ");
	scanf("%d",&input1);
	printf("Enter second number :- ");
	scanf("%d",&input2);
	switch(choice)
	{
		case 1:
			a= input1+input2;
			printf("\nAddition of %d and %d is %d\n",input1,input2,a);
			break;
		case 2:
			b= input1-input2;
			printf("\nSubtraction of %d and %d is %d\n",input1,input2,b);
			break;
		case 3:
			c= input1*input2;
			printf("\nMultiplication of %d and %d is %d\n",input1,input2,c);
			break;
		case 4:
			d= input1/input2;
			printf("\nDivision of %d and %d is %d\n",input1,input2,d);
			break;
		case 5:
			e= input1%input2;
			printf("\nModulo/remainder of %d and %d is %d\n",input1,input2,e);
			break;
		case 6:
			a= input1+input2;
			b= input1-input2;
			c= input1*input2;
			d= input1/input2;
			e= input1%input2;
			printf("\nAddition of %d and %d is %d\n",input1,input2,a);
			printf("\nSubtraction of %d and %d is %d\n",input1,input2,b);
			printf("\nMultiplication of %d and %d is %d\n",input1,input2,c);
			printf("\nDivision of %d and %d is %d\n",input1,input2,d);
			printf("\nModulo/remainder of %d and %d is %d\n",input1,input2,e);
			break;
		default:
			printf("Enter valid input");
	}
}