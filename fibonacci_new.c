#include<stdio.h>
int main()
{
	int n,i,t1=0,t2=1;
	int t3=t2+t1;
	printf("Enter number of digit : ");
	scanf("%d",&n);
//	printf("Fibbanocci series : \n %d %d ",t1,t2);
	for(i=1;i<=n;i++)
	{
		printf("%d ",t1);
		t1 = t2;
		t2 = t3;
		t3 = t2+t1;
		
		
	}
	
}