#include<stdio.h>

int main()
{
	char alphabet;
	printf("Enter any Alphabet :\n");
	scanf("%c",&alphabet);
	
	if (alphabet =='A' || alphabet=='a' || alphabet=='E' || alphabet=='e' || alphabet=='I' || alphabet=='i' || alphabet=='O' || alphabet=='o' || alphabet=='U' || alphabet=='u')
	{
		printf("%c character is Vowel \n",alphabet);
	}
	else
	{
		printf("HELO");
	}
}