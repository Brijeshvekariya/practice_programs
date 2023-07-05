#include<stdio.h>

int main()
{
	int input;
	printf("Enter the number of which multiplication table you want :- ");
	scanf("%d",&input);
	printf("\nThe multiplication table of %d is : \n",input);
	for(int i=1;i<=10;++i)
	{
		printf("\n %d * %d = %d\n",input,i,input*i);
	}
}