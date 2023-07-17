#include<stdio.h>

int main()
{
	int i,n,j;
	printf("Enter numbers of rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		char count='A';
		for(j=1;j<=i;j++)
		{
			printf(" %c ",count);
			count+=1;
		}
//		count = 'A';
		printf("\n");
	}
}