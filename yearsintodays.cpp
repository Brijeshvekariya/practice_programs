#include<stdio.h>

int main()
{
	int year1,year2,year,days;
	printf("Enter the years for converting into days \n");
	printf("starting year :- ");
	scanf("%d",&year1);
	printf("ending year :- ");
	scanf("%d",&year2);
	if(year2>year1)
	{
		year=(year2-year1)+1;
		if(year1%4==0 || year2%4==0)
		{
			days=year*366;
			printf("%d days in between %d year to %d year",days,year1,year2);
		}
		else
		{
			days=year*365;
			printf("%d days in between %d year to %d year",days,year1,year2);
			
		}
	}
	else
	{
		printf("enter starting year smaller than ending year");
	}
}