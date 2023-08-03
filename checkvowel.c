#include<stdio.h>
int main()
{
	char a;
	printf("Enter Any alphabet : ");
	scanf("%c",&a);
	if(a=='A'|| a=='a' || a=='e' || a=='E' || a=='i' || a=='I' || a=='O' || a=='o' || a=='U' || a=='u')
	{
		printf("%c is VOWEL",a);
	}
	else
	{
		printf("%c is not VOWEL",a);
	}
}