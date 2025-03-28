#include "main.h"
/**
 * _strncpy - concatenates two strings,taking in n number of chars from string two and writing in into the target string starting from te=he first index
 * @dest: string to be concatenated
 * @src: string to be joined with dest
 * @n: number of characters taken from string two
 * Return: partially or completely concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

  return dest;
}
