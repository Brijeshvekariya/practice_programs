#include<stdio.h>

int main()
{
	int i,a;
	printf("Enter total numbers :- ");
	scanf("%d",&i);
	int num[i];
	for( a=0;a<i;a++)
	{
		printf("Enter %d number :- ",a+1);
		scanf("%d",&num[a]);
//		printf("The number entered is: %d",num[a]);
	}
	for(int a=0;a<i;a++)
	{       
		printf("The %d number is :- %d\n",a+1,num[a]);
	}         
}