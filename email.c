
#include<stdio.h>

char email[50];
char pass[50];
int choice;

int input(int a)
{
	if(a>0)
	{
		printf("Enter your %d  email id : \n",a);
		scanf("%s",&email);
		printf("Enter your %d  password : \n",a);
		scanf("%s",&pass);
		printf("your %d email is : %s\n",a,email);
		printf("your %d password is : %s\n",a,pass);
//		printf("r");
		input(a-1);
	}
}
//int display(int a)
//{
////	printf("display\n %d",a);
//	if(a>0)
//	{
//		display(a-1);
//	}
//	
//}


int main()
{
	printf("Enter how many email you want to add : ");
	scanf("%d",&choice);
	input(choice);		
//	display(choice);
}
