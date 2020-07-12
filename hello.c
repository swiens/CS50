#include <stdio.h>
#include <cs50.h>

int main(void)
{
    /* prompts user for name and stores response in variable name */
    string name = get_string("what is your name?\n");
    /* prints message to the screen with name */
    printf("hello, %s\n", name);
}
