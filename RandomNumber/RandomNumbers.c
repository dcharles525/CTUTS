#include <stdio.h>
#include <conio.h>

int main(void)
{
	
	int counter_number = 0;
	
	while (counter_number < 15)
	{
	
		//%number is the range 1+ adds one to everything
		printf("%d\n", 1+rand()%6);
		counter_number++;
	
	}
	
	getch;
	return 0;
	
}
