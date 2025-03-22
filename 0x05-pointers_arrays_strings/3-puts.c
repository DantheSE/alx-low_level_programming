#include "main.h"
/**
 * _puts- returns the length of a string
 * @str: string received from user
 * Return: nothing
 */

void _puts(char *str)
{
    while (*str != '\0')
    {
        _putchar(*str);
        str++;
    }
    _putchar('\n'); 
}
