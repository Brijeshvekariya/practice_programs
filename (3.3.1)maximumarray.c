// c program to find out the max number from given array using function.

#include<stdio.h>
int i,number[10],max=0;
int maximum()
{
	int max=0;
	for(int i=0;i<10;i++)
	{
		if(number[i]>max)
		{
			max = number[i];
		}
	}
	printf("%d is the maximum number from given array.",max);
}

int main()
{
	printf("Enter 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		printf("Enter %d number : ",i+1);
		scanf("%d",&number[i]);
	}
	maximum();
}