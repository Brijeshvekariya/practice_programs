#include<stdio.h>

int length()
{
	char s[100];
	printf("Enter any string you want to reverse : ");
	gets(s);
	int i=0,j;
	for (i = 0; s[i] != 0; i++){
	}
	for(int j = i;j>=0;j--)
	{
		printf("%c",s[j]);
	}
}
int main()
{
	length();
}