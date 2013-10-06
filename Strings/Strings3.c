#include <stdio.h>

int main()
{
	
	char name[5] = {'\0'};
	
	printf("What is your first name ");
	scanf("%s", name);
	
	printf("Your name is %s", name);
	
	getchar();
	getchar();
	
}

