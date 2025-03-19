#include "main.h"
/**
 * print_line - draws straight line in terminal
 *
 * @n: number of times the character should be printed
 * Return: no return value
 */

void print_diagonal(int n)
{
    int length, space;
    if (n > 0)
    {
        for (length = 0; length < n; length++)
        {
            for (space = 0; space < length; space++)
            {
                _putchar(' ');
            }
                _putchar('\\');

                if (length == (n - 1))
                    continue;
                _putchar('\n');
        }
    }
    _putchar('\n');
}
