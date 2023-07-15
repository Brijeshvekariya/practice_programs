#include<stdio.h>
int a1[2][2],a2[2][2],a[2][2];
int i,j,k=1;

void input1()
{
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter %d number of 1 array : ",k,i+1);
			scanf(" %d",&a1[i][j]);
			k+=1;
		}
	}
}
void input2()
{
	int i,j,k=1;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter %d number of 2 array : ",k,i+1);
			scanf(" %d",&a2[i][j]);
			k+=1;
		}
	}
}
void add()
{
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			a[i][j] = a1[i][j] + a2[i][j];
		}
	}
	printf("\n\nAddition Matrix is : \n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	
}
void sub()
{
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			a[i][j] = a1[i][j] - a2[i][j];
		}
	}
	printf("\n\nSubtraction Matrix is : \n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	
}
void mul()
{
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			a[i][j] = a1[i][j] * a2[i][j];
		}
	}
	printf("\n\nMultiplication Matrix is : \n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	
}
int main()
{
	input1();
	input2();
	add();
	sub();
	mul();
}