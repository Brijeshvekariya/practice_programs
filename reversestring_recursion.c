//C program to find reverse of string using recursion
#include<stdio.h>

char s[100];
int i,j;
void reverse() //function to reverse string using recursion
{
	if(i >= 0)
	{
		printf("%c",s[i]);
		i--;
		reverse();
	}
}
int main()
{
	printf("Enter any string you want to reverse : ");
	gets(s);
	for (i = 0; s[i] != 0; i++){}
	printf("The reverse of given string is : ");
	reverse();
}