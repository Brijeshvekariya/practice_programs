/*#include<stdio.h>

int main()
{
	int input1,input2,input3;
	printf("Enter any three numbers to check larger number :-\n");
	scanf("%d %d %d",&input1,&input2,&input3);
	if(input1>=input2)
	{
		if(input1>=input3)
		{
			printf("%d is the largest from given three numbers",input1);
		}
		else
		{
			printf("%d is the largest from given three numbers",input3);
		}
	}
	else
	{
		if(input2>=input3)
		{
			printf("%d is the largest from given three numbers",input2);
		}
		else
		{
			printf("%d is the largest from given three numbers",input3);
		}
	}
}
*/




//Another Method to solve the problem


#include<stdio.h>

int main()
{
	int input1,input2,input3;
	printf("Enter any three numbers to check larger number :-\n");
	scanf("%d %d %d",&input1,&input2,&input3);
	if(input1>input2 && input1>input3)
	{
		printf("%d is the largest from given three numbers",input1);
	}
	if(input2> input1 && input2>input3)
	{
		printf("%d is the largest from given three numbers",input2);	
	}
	if(input3>input1 && input3>input2)
	{
		printf("%d is the largest from given three numbers",input3);	
	}
}