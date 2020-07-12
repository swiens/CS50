#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{ 
    
    /* program asks user to enter amount of change so it can calculate amount of coins needed */
    float dollar; 
    do
    {
        dollar = get_float("Enter your change: ");
    }
    while (dollar <= 0); 
    /* converting dollar to cents */
    int cents = round(dollar * 100);
    int coins = 0;
    /* loop is in place to run through the value of each coin and account for choosing the larger value first and to on move onto a lesser value as a next option */
    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    
    }
    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }
    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }
    /* result should be number of coins cashier gives back client*/
    printf("you need %i coins", coins);
    
}
