#include<stdio.h>

int main()
{
	int i,j,input[10];
	printf("Enter any 10 numbers :\n");
	for(i=0; i<10;i++)
	{
		printf(" %d  number : ",i+1);
		scanf(" %d",&input[i]);
	}
	for(i=0;i<10;i++)
	{
		if(input[i]%2==0)
		{
			printf("\n%d ",input[i]);
		} 
	}
	printf("are the even numbers from given input.");
}