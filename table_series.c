#include<stdio.h>

int main()
{
	int i,j;
	printf("Enter number for start table : ");
	scanf("%d",&i);
	printf("Enter number of end table : ");
	scanf("%d",&j);
	for(i;i<=j;i++)
	{
		printf("\n\n\nThe Multiplication table of %d : \n",i);
		for(int k=1;k<=10;k++)
		{
			printf("%d * %d = %d \n",i,k,i*k);
		}
	}
}