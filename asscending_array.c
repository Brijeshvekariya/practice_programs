#include<stdio.h>

int main()
{
	int n,t=0;
	printf("Enter Numbers of Elements : ");
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i<n;i++)
	{
		printf("Enter %d number : ",i+1);
		scanf(" %d",&a[i]);
	}
	for(int i = 0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for(int i = 0;i<n;i++)
	{
		printf(" %d number \n",a[i]);
	}
}
	
	