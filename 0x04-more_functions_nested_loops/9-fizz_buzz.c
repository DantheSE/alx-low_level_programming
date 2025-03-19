#include <stdio.h>
/**
 * main - runs the program
 * @i: loop variable
 * Return - returns 0 if program and 1 for anything else
 */

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if ((i % 3) == 0 && (i % 5) == 0)
        {
            printf("FizzBuzz ");
        }
        else if ((i % 3) == 0)
        {
            printf("Fizz ");
        }
        else if ((i % 5) == 0)
        {
            printf("Buzz ");
        }
        else
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return (0);
}