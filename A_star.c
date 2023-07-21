#include<stdio.h>
	int l = 0;
	int k = 0;

int main()
{
	for(int i = 0;i<10;i++)
	{
		
		for(int j =10;j>i;j--)
		{	
			  printf(" ");           
		}
		for(k;k<=i;k++)
		{
			if(i == 7)
			{
				for(int j = 0;j<i;j++)
				{
					printf("* ");
				}
			}
			
//			printf("l is %d ",l);
			printf("* ",k);
			
			if(i>1)
			{
//				k = k+1;
				for(l=0;l<=(k*2)-3;l++)
				{
//					printf(" k is %d",k);
					printf(" ");
				}
			}
			if(i>0 && i != 7)
			{
			printf("*");
			}
		}
			
//			k = i;
//			printf("%d",l);
		
		printf("\n");
	}
}
	