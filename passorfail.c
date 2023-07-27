#include<stdio.h>
int main()
{
	int maths,science,social,gujarati,english;
	printf("Enter your 5 subjects mark:\n\nEnter Mathematics marks : ");
	scanf("%d",&maths);
	printf("Enter Science Marks : ");
	scanf("%d",&science);
	printf("Enter Social Science Marks : ");
	scanf("%d",&social);
	printf("Enter Gujarati Marks : ");
	scanf("%d",&gujarati);
	printf("Enter English Marks : ");
	scanf("%d",&english);
	int marks;
	marks =maths+science+social+gujarati+english;
	if(marks/5>=80)
	{
		printf("\n\nCongratulations, You Passed Exam with First Class with Distiction");
	}
	else if(marks/5>=65)
	{
		printf("\n\nCongratulations, You Passed Exam with First Class ");
	}
	else if(marks/5>=50)
	{
		printf("\n\nCongratulations, You Passed Exam with Second Class ");
	}
	else if(marks/5>=40)
	{
		printf("\n\nCongratulations, You Passed Exam. ");
	}
	else
	{
		printf("You Failed The Exam");
	} 

}