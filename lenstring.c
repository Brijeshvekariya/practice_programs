#include<stdio.h>
char string[100];

void length()
{
	int i;
	gets(string);
	for(i = 0;string[i]!= 0 ;i++)
	{
	}
	printf("Length of string is : %d",i);
}
int main()
{
	printf("Enter any string to find length : ");
	length();
}