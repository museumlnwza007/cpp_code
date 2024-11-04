#include <stdio.h>

int main(void){
	int score;
	printf("Enter your score:  ");
	scanf("%d", &score);
	printf("Score= %d",score);
	{
	
	if(score >80 && score <=100)
		printf("Grade S");
		}
	{
	else if(score >75 && score <=79);
		printf("Grade A");
		}
	{
	else if(score >70 && score <=74);
		printf("Grade B");
		}
	}