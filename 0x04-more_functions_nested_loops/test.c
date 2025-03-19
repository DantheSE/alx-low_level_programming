#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return: returns nothing
 */
void print_diagonal(int n)
{
    int length, spaces;

    if (n > 0)
    {
        for(length = 0; length < n; length++)
        {
            for(spaces = 0; spaces < length; spaces++)
            {
                _putchar(' ');
            }
            _putchar('\\');
                
            if (length == (n -1))
                continue;
            _putchar('\n') ;
            }

        _putchar('\n') ;
    }
}
