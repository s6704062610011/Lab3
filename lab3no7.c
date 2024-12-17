#include <stdio.h>
int main()
{
	 int score;char grade;
	 printf("Enter score: ");
	 scanf("%d",&score);
	 if (score >= 68)
	 {
		 if (score >= 85)
		 {
		 	grade='A';
		 }
		 else if (score >= 75)
		 {
		 	grade='B';
		 }
		 else if (score >= 68)
		 {
		 	grade='C';
		 }
	 }
	 else
	 {
		 if (score >= 55)
		 {
		 grade='D';
		 }
		 else
		 {
		 grade='F';
		 }
	 }
	 switch (grade)
	 {
	 case 'A':
		 printf("Excellent");
		 break;
	 case 'B':
		 printf("Good");
		 break;
	 case 'C':
		 printf("So So");
		 break;
	 case 'D':
		 printf("Fails");
		 break;
	 case 'F':
		 printf("Get lost");
		 break;
	 default:
	 	printf("Invalid");
	 }
	 return 0;
}
