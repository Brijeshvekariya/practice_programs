#include<stdio.h>

int main()
{
	int n,m,t=0;
	printf("Enter Numbers of rows : ");
	scanf("%d",&n);
	printf("Enter Numbers of Columns : ");
	scanf("%d",&m);
	int a[n][m];
	int b[n][m];
	int c[n][m];
	for(int i = 0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		printf("Enter %d %d number : ",i+1,j+1);
		scanf(" %d",&a[i][j]);
		}
	}
	
	printf("\n\n");
	for(int i = 0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		printf("Enter %d %d number : ",i+1,j+1);
		scanf(" %d",&b[i][j]);
		}
	}
	for(int i = 0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			c[i][j] = a[i][j] * b[i][j];
		}
	}
	for(int i = 0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
}
	
	