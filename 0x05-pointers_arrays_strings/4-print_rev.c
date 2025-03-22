#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string received from user
 * Return: nothing
 */

void print_rev(char *s)
{
    int length;

    for (length = _strlen(s); length > 0; length--)
    {
        _putchar(s[length]);
    }
    _putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: string received from user
 * Return: the length of the string in numbers
 */

int _strlen(char *s)
{
    int count = 0;
    while (*s != '\0')
    {
        count++;
        s++;
    }

    return count;
}
