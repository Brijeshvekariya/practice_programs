#include<stdio.h>

int main()
{
	int choice;
	printf("1. Monday \n2.Tuesday \n3.Wednesday \n4.Thrusday \n5. Friday \n6. Saturday \n7. Sunday\n");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				printf("You selected MONDAY\n");
				break;
			}
		case 2:
			{
				
				printf("You selected TUESDAY\n");
				break;
			}
		case 3:
			{
				
				printf("You selected WEDNESDAY\n");
				break;
			}
		case 4:
			{
				printf("You selected THRUSDAY\n");
				break;
				
			}
		case 5:
			{
				printf("You selected FRIDAY\n");
				break;
				
			}
		case 6:
			{
				
				printf("You selected SATURDAY\n");
				break;
			}
		case 7:
			{
				printf("You selected SUNDAY\n");
				break;
			}
			default :
				printf("Please enter valid number \n");
	}
}