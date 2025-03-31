#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: supplied string
 * Return: encoded string
 */

char *leet(char *s)
{
    char letters[11] = "aAeEoOtTlL";
    char numbers[11] = "4433007711";
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; j < 11; j++)
        {
            if (s[i] == letters[j])
            {
                s[i] = numbers[j];
                break;
            }
        }
    }
    return (s);
}
