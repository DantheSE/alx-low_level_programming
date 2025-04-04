#include "main.h"
/**
 * _strcmp - compares the ascii values of two strings
 * @s1: first string
 * @s2: second string
 * Return: zero if equal, result of subtraction if not
 */
int _strcmp(char *s1, char *s2)
{
    int i;
    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
    }
    return s1[i] - s2[i];
}
