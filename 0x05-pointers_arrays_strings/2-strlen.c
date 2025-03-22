#include "main.h"
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
