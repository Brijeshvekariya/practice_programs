#include<stdio.h>

int main()
{
	char a[100],r[100];
	printf("Enter string : ");
	gets(a);
	int j=0,i=0,count=0;
	while(a[i] != '\0')
	{
		count+=1;
		i++;
	}
	for(j,count;count>=0;count--,j++)
	{
		r[j] = a[count];
	}
	for(int j=0;j<=i;j++)
	{
		if(a[j]==r[j+1])
		{
			count +=1;
		}
		
	}
	if(count == i-1)
	{
		printf("String is palindrome");
	}
	
	
}