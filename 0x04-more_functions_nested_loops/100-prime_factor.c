#include <stdio.h>
/**
 * main - program to find the largest prime factor of a large number
 * Return: returns 0 for success and 1 for failure  
 */

int main()
{
    unsigned long number = 612852475143;
    unsigned long i,  largest;

    if (number % 2 == 0)
    {
        largest = 2;
        number /= 2; 
    }

    for (i = 3; i * i <= number; i += 2)
    {
        if ((number % i) == 0)
        {
            largest = i;
            number /= i;
        }
    }

    if (number > largest)
    {
        largest = number;
    }
    printf("Largest factor: %lu\n", largest);
    return (0);
}
