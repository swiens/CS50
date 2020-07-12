#include <stdio.h>
#include <cs50.h>

int main(void)
{
    /* variable defined outside of bracket so that it can be recognized after loop*/
    int number;
    /*loop makes sure to keep asking user until a number between 1-8 is entered*/
    do 
    {
        number = get_int("Please Enter Height: ");
    }
    
    while (number < 1 || number > 8);
    
    for (int i = 0; i < number; i++)
    {
        for (int space = 0; space < number - i - 1; space++)
        {
            /* space is added so that hashes are indented and pyramid can right align*/
            printf(" ");
        }
        
        for (int n = 0; n <= i; n++)
        {
            
            printf("#");
        }
        
        printf("\n");
    }
    
}