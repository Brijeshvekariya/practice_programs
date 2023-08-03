#include<stdio.h>

int main()
{
	int input1,input2,swap;
	printf("Enter any two integers you want to swap :- \n");
	scanf("%d %d",&input1,&input2);
	swap=input1;
	input1=input2;
	input2=swap;
	printf("the Swap numbers are %d , %d",input1,input2);
}

//Another method to solve this program
//this method takes more time to get output.
/*
int main()
{
	int input1,input2;
	printf("Enter any two integers you want to swap :- \n");
	scanf("%d %d",&input1,&input2);
	input1 = input1 - input2;
	input2 = input1 + input2;
	input1 = input2 - input1;
	printf("the Swap numbers are %d , %d",input1,input2);
}
*/

