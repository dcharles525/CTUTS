#include <stdio.h>

int main(void)
{
	
	//vars
	int userage;
	int citizen = 1;
	
	//asks for data
	printf("How old are you?");
	scanf("%d", &userage);
	
	//checks for age and citizen
	if(userage >= 18 && citizen == 1)//==testing equals, and && ,and, || or
	{
		
		printf("You are able to vote.");
		
	}
		
	else
	{
		
		printf("You are not able to vote you are to young");
		
	}
	getchar();
	getchar();
	
	return 0;
}
