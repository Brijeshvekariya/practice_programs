#include<stdio.h>

int main()
{
	int input,mean=0;
	printf("Enter the last natural number to find mean of first natural numbers :-  ");
	scanf("%d",&input);
	for(int i=1;i<=input;i++)
	{
		mean+=i;
	}
	printf("The sum of first %d natural number is %d \n",input,mean);
	printf("\nThe mean of first %d natural number is %d ",input,mean/input);
}