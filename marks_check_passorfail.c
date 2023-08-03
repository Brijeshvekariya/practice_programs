#include<stdio.h>
void checkmarks( int marks )
{
	if(marks>=0)
	{
		if(marks>= 33)
		{
			if(marks > 50)
			{
				if(marks>70)
				{
					if(marks>85)
					{
						if(marks>=100)
						{
							if(marks==100)
							{
							printf("Congratulations you got 100 marks");
							}
							else
							{
							 printf("enter valid marks");
							}
								
						}
						else
						{
						printf("Congratulations ! You have passed your exam with First class with distintion");
						}
					}
					else
					{
						printf("you passed exam with first class");
					}
				}
				else
				{
					printf("you passes the exam with second class");
				}
			}
			else
			{
				printf("you passed the exam");
			}
		}
		else
		{
			printf("you failed the exam");
		}
	}
	else
	{
		printf("enter valid marks");
	}
}
int main()
{
	int marks;
	printf("Enter marks of student between 0 to 100 :- ");
	scanf("%d",&marks);
	checkmarks(marks);
//	if(marks>=0)
//	{
//		if(marks>= 33)
//		{
//			if(marks > 50)
//			{
//				if(marks>70)
//				{
//					if(marks>85)
//					{
//						if(marks>=100)
//						{
//							if(marks==100)
//							{
//							printf("Congratulations you got 100 marks");
//							}
//							else
//							{
//							 printf("enter valid marks");
//							}
//								
//						}
//						else
//						{
//						printf("Congratulations ! You have passed your exam with First class with distintion");
//						}
//					}
//					else
//					{
//						printf("you passed exam with first class");
//					}
//				}
//				else
//				{
//					printf("you passes the exam with second class");
//				}
//			}
//			else
//			{
//				printf("you passed the exam");
//			}
//		}
//		else
//		{
//			printf("you failed the exam");
//		}
//	}
//	else
//	{
//		printf("enter valid marks");
//	}
}
