//file saving

#include <stdio.h>

int main(void)
{
	
	int input_number;
	FILE *input_file;
	
	printf("Enter a number\n");
	scanf("%d", &input_number);
	
	input_file = fopen("data.txt", "w");
	fprintf(input_file, "%d", input_number);
	
}
