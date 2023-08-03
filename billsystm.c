#include<stdio.h>
float quantity;
float tot = 0;

void displaymenu()
{
	printf("------Welcome to GRAND THAKKAR RESTRO------\n");
	printf("Today's Menu :\n");
	printf("\n1. Dal Batti \n2. Pizza \n3. Burger \n4. Sandwich \n\n");
}
int dalbatti()
{
	printf("You selected Dalbatti \n");
	printf("The prize of one plate is Rs. 150/- \n");
	printf("\nPlease select your Quantity : ");
	scanf("%f",&quantity);
	quantity*=150;
	printf("Amout = Rs. %.2f/- \n",quantity);
	return quantity;
}
int pizza()
{
	printf("You selected Pizza \n");
	printf("The prize of one plate is Rs. 250/- \n");
	printf("\nPlease select your Quantity : ");
	scanf("%f",&quantity);
	quantity*=250;
	printf("Amout = Rs. %.2f/- \n",quantity);
	return quantity;
}
int burger()
{
	printf("You selected Burger \n");
	printf("The prize of one plate is Rs. 100/- \n");
	printf("\nPlease select your Quantity : ");
	scanf("%f",&quantity);
	quantity*=100;
	printf("Amout = Rs. %.2f/- \n",quantity);
	return quantity;
	
}
int sandwich()
{
	printf("You selected Sandwich \n");
	printf("The prize of one plate is Rs. 200/- \n");
	printf("\nPlease select your Quantity : ");
	scanf("%f",&quantity);
	quantity*=200;
	printf("Amout = Rs. %.2f/- \n",quantity);
	return quantity;
}
float total(float quantity)
{
	tot +=quantity;
	printf("Total amount to be paid : Rs. %.2f /- \n",tot);
}

int main()
{
	char re[10];
	int choice;
	do
	{
	displaymenu();
	printf("Enter your choice : ");
	scanf(" %d",&choice);
	switch(choice)
	{
		case 1:
		{
			quantity = dalbatti();
			total(quantity);
			break;
		}
		case 2:
		{
			quantity = pizza();
			total(quantity);
			break;
		}
		case 3:
		{
			quantity = burger();
			total(quantity);
			break;
		}
		case 4 :
		{
			quantity = sandwich();
			total(quantity);
			break;
		}
	}
	printf("You want to add more things or done(yes/no): ");
	scanf("%s",&re);
//	printf("%s",re);
	}
	while(re[0] =='y');
}