#include <stdio.h>
int main()
{
	 int score;
	 char a;
	 printf("Enter your score: ");
	 scanf("%d", &score);
	 if (score >= 0)
	 {
	 	if (score <= 100)
	 	{
	 		if (score >= 68)
	 		{
	 			if (score >= 85)
	 			{
	 				printf("A\n");
	 			}
	 			else if (score >= 75)
	 			{
	 				printf("B\n");
	 			}
		 		else if (score >= 68)
		 		{
		 			printf("C\n");
		 			printf("%d more score for grade B\n", 75 - score);
		 		}
		 	}
		 	else
		 	{
		 		if (score >= 55)
		 		{
		 		printf("D\n");
		 		}
		 		else
		 		{
		 			printf("F\n");
		 		}
		 	}
		 }
		 else
		 {
		 	printf("error score\n");
		 }
		 }
		 else
		 {
		 printf("error score\n");
		 }
		 printf("Enter your score: ");
		 scanf("%d", &score);
		 if (score >= 0)
		{
		 	if (score <= 100)
		 	{
		 		if (score < 68)
		 		{
		 			if (score >= 55)
		 			{
		 				printf("D\n");
		 			}
		 			else
		 			{
		 				printf("F\n");
		 			}
		 		}
		 		else
		 		{
					if (score >= 85)
					 {
					 	printf("A\n");
					 }
					 else if (score >= 75)
					 {
					 	printf("B\n");
					 }
					 else if (score >= 68)
					 {
					 	printf("C\n");
					 	printf("%d more score for grade B\n", 75 - score);
					 }
		 		}
		 	}
		 	else
		 	{
		 		printf("error score\n");
		 	}
		}
		 else
		 {
		 	printf("error score\n");
		 }
	 return 0;
} 

