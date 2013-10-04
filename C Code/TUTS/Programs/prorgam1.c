#include <stdio.h>

int main(void)
{
    int guess;
    
    printf("Guess a number between 1 and 10");
    scanf("%d", guess);
    
    if(guess == 5)
    {
 
             printf("You guess corrected!");        
             
    }
    if(guess < 5)
    {
             
             printf("You guessed to low");
             
    }
    if(guess > 5)
    {
             
             printf("You guessed to high");         
             
    }
    else
             
             printf("Guess something between 1 and 10 please");
    
    getchar();
    getchar();
    
}
