#include "main.h"
/**
 * rot13 - encodes string in rot13
 * @s: supplied string
 * Return: encoded string
*/

char *rot13(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        while ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
        {
            s[i] -= 13;
            i++;
        }
        if ((s[i] >= 'a' && s[i] < 'n') || (s[i] >= 'A' && s[i] < 'N'))
        {
            s[i] += 13;
        }
    }
    return (s);
}
