#include<stdio.h>

int main()
{
	int input;
	printf("enter numbers of line");
	scanf("%d",&input);
	for(int i=1;i<=input;++i)
	{
		for(int j=input;j>=i;--j)
		{
			printf(" %d ",j);
		}printf("\n");
	}
}