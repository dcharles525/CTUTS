#include <stdio.h>
#include <conio.h>

int main(void)
{
	
	int counter_number = 0;
	
	//seeder that uses time for seed
	srand(time(NULL));
	
	while (counter_number < 15)
	{
	
		printf("%d\n", rand());
		counter_number++;
	
	}
	
	getch;
	return 0;
	
}
