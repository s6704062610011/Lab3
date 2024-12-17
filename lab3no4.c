#include <stdio.h>
int main(void) {
	int score;
	printf("Enter tour score: ");
	scanf("%d",&score);
	int sum =40 - score;
	if (score >29) {
		if(score > 39){
			printf("You Pass\n");
		}
		else if(score >= 30 && score <= 39){
			printf("You Can test Again\n");
			printf("Got %d score to pass\n",sum);
		}
	}
	else{
		printf("You fail\n");
		printf("Got %d score to pass\n",sum);
	}
	return 0;
	
}

