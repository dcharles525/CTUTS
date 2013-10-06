#include <stdio.h>
#include <conio.h>

int main(void)
{
	
	int eyes;
	int toes;
	
	printf("Enter number of eyes and toes");
	scanf("%d%d", &eyes, &toes);
	
	//logical operators || or && and
	if(eyes == 2 || toes == 10)
	{
		
		printf("You are normal");
		
	}
	
	else
	{
		
		printf("You are weird");
		
	}
	
	getch();	
	
}
