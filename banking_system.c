#include<stdio.h>
char name()
{
	char name[100];
	printf("Enter your Full Name : ");
//	scanf("%s",&name);
	gets(name);
	printf("\n\n\n\n Welcome %s to NBI Bank :) \n",name);
}
float displaybalance()
{
	float balance;
	printf("\nEnter your Bank account Balance in Rs.  :- ");
	scanf("%f",&balance);
	printf("\n\n  Your Account Balance is Rs. %.2f /-\n",balance);
	return balance;
}
int displayoption()
{
	int choice;
	printf("\n\nPlease select any one option from below :\n");
	printf("1. Deposit \n2. Withdraw \n3. Exit \n");
	printf("Enter your choice : ");
	scanf("%d",&choice);
	return choice;
}
float deposit()
{
	float deposit;
	printf("How much Money you want to deposit :- ");
	scanf("%f",&deposit);
	printf("Depositing %.2f/- money in your account.",deposit);
//	printf("Total Available Balance is Rs. %.2f/-")
	return deposit;
}
float withdraw()
{
	float withdraw;
	printf("How much Money you want to Withdraw :- ");
	scanf("%f",&withdraw);
	printf("Withdrawing %.2f/- money from your account.",withdraw);
	return withdraw;
	
	
}
float addbalance(float balance,float dep)
{
	printf("\nTotal Available Balance is Rs. %.2f/-\n",balance+dep);
}
float subbalance(float balance,float with)
{
	printf("\nTotal Available Balance is Rs. %.2f/-\n",balance-with);
	
}
int main()
{
	name();
	float balance = displaybalance();
	int choice = 1;
//	printf("%d",choice);
	
	while(choice<3)
	{
		int choice = displayoption();		
	if(choice>0)
	{
		if(choice==1)
		{
			float dep = deposit();
			addbalance(balance,dep);
		}
		if(choice==2)
		{
			float with = withdraw();
			subbalance(balance,with);
		}
		else
		printf("enter valid input\n");
	}
	else
	{
		printf("Enter valid option\n");
	}
	}
}