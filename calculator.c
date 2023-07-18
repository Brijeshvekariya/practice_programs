#include<stdio.h>
int choose;
float first,second;
char rep = 'y';//rep is repeat value for controlling do while loop.
//function to display menu.
void displaymenu()
{
	printf("----------Calculator MENU----------\n\n");
	printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n");
}
//function to take choice from user.
int choice()
{
	printf("\nEnter your choice : ");
	scanf("  %d",&choose);
	return choose;
}
//function to take user first input.
int firstinput()
{
	printf("\nEnter First Number : ");
	scanf(" %f",&first);
	return first;
}
//function to take user second input.
int secondinput()
{
	printf("Enter Second Number : ");
	scanf(" %f",&second);
	return second;
}
//function for addition. 
int addition(float first,float second)
{
	printf("\nThe Addition of %.2f and %.2f : %.2f\n",first,second,first+second);
}
//function for subtraction.
int subtraction(float first,float second)
{
	printf("\nThe Subtraction of %.2f and %.2f : %.2f\n",first,second,first-second);
}
//function for multiplication.
int multiplication(float first,float second)
{
	printf("\nThe Multiplication of %.2f and %.2f : %.2f\n",first,second,first*second);
}
//function for division
int division(float first,float second)
{
	printf("\nThe Division of %.2f and %.2f : %.2f\n",first,second,first/second);
}
//function to swap two numbers.
int swapsubtract(float first,float second)
{
	float a,b;
	a = first;
	b = second;
	a = a+b;
	b = a-b;
	a = a-b;
	printf("\n\nAfter swaping first number and second number \nSubtraction of %.2f and %.2f : %.2f\n",a,b,a-b);
}
//function to change repeat value.
int repeat()
{
	printf("\nDo you want to continue calculator or exit (y or n) : ");
	scanf(" %c",&rep);
	return rep;
}

int main()
{
	printf("----------Welcome to Simple Calculator----------\n\n");
	do //use of do while loop to control program execution.
	{
		displaymenu(); //function call
		choose = choice();
		switch(choose) // use of switch case to evaluates given expression based on value.
		{
			case 1 :
				{
					first = firstinput(); //call firstinput fun. to store value in first.
					second = secondinput(); //call firstinput fun. to store value in first.
					addition(first,second);
					break;
				}
			case 2 :
				{
					first = firstinput();
					second = secondinput();
					if(first>second)
					{
						subtraction(first,second);
					}
					else
					{
						subtraction(first,second);
						swapsubtract(first,second);
					}
					break;	
				}
			case 3 :
				{
					first = firstinput();
					second = secondinput();
					multiplication(first,second);
					break;
				}
			case 4 :
				{
					first = firstinput();
					second = secondinput();
					if(second ==0)
					{
					 	printf("\nDivision is infinte.\n");
						break;
					}
						division(first,second);
						break;
				}
			default :
				{
					printf("Enter valid option\n");
				}
		}
		rep = repeat();
	}while(rep == 'y'); // continue execution till rep value remains 'y'.
}