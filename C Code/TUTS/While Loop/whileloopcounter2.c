#include <stdio.h>
#include <conio.h>

int main(void)
{
	
	//diffrent ways to add one to counter
	//counter ++;
	//counter +=1;
	//counter = counter +1; <-- doesnt have to be one
	
	int counter;
	
	while(counter < 10)
	{
		
		printf("%d\n", counter);
		counter += 1;
		
	}
	
	printf("end of while start of for");
	
	for(counter = 1; counter < 20;counter++)
	//what it starts at, when will it stop, what is the incriment
	{
		
		printf("%d\n", counter);
		
	}
	
	getch();	
	
}


