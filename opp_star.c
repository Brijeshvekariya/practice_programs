#include<stdio.h>

int main()
{
	int k,i,n,j,a;
	printf("Enter numbers of rows : ");
	scanf("%d",&n);
//	a = n;
	k = n*2 - 1; //k=9
	for(i=1;i<=n;i++) 
	{
		for(j=1;j<=k;j++)
		{
			printf(" ");
		}
		k = k-2;
		for(int j=1 ;j<=i;j++ )
		{
			printf("* ");
//			printf(" ");
		}
//		a -=1;
		printf("\n");
	}
}
