#include "main.h"
/**
 * print_line - draws straight line in terminal
 *
 * @n: number of times the character should be printed
 * Return: no return value
 */

void print_line(int n)
{
    while(n > 0)
    {
        _putchar('_');
        n--;
    }
    _putchar('\n');
}
