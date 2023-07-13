#include<stdio.h>

char s[100],r[100];
int i=0,j;
void length()
{
	int k = 0;
	printf("Enter any string you want to reverse : ");
	gets(s);
	for (i; s[i] != 0; i++){
	}
	for(k,j = i;j>=0;j--,k++)
	{
		r[k] = s[j];
	}
}
int main()
{
	length();
	int count=0;
	for(j=0;j<i;j++)
	{
		if(s[j] == r[j+1])
		{
			count += 1;
		}
	}
	if(count == j )
	{
		printf("\n\nThe Given String is Palindrome ");
	}
	else
	{
		printf("\n\nThe Given String is not Palindrome ");
	}
}