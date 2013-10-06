#include <stdio.h>
#include <conio.h>

int main(void)
{
	
	int loopcount;
	int hotdogs;
	int total;
	int average;
	
	total = 0;
	loopcount = 0;
	
	while(loopcount < 5)
	{
		
		printf("Enter amount of hotdogs eaten");
		scanf("%d", &hotdogs);
		total = total + hotdogs;
		
		loopcount = loopcount+1;
		
	}
	
	average = total/5;
	printf("Total number of dogs per day was %d", average);
	
	
	getch();
	
}
