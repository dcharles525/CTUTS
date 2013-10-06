#include <stdio.h>
#include <conio.h>

int main(void)
{
	
	int number;
	scanf("%d" ,&number);
	
	//how to start it is switch and then the thing your trying to test
	switch(number)
	{
		
		//the case sctructe is pretty easy
		case 2:
			
			printf("You entered two");
			
		break;
		
		case 4:
		
			printf("You entered four");
			
		break;
		
		case 6:
		
			printf("You entered six");
			
		break;
		
		//if all the case statements come up false then it goes to default
		default:
			
			printf("I dont know what you entered");
			
		break;
		
	}
	
	getch();
	
}
