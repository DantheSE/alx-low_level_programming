#include "main.h"
/**
 * cap_string - capitalizes each word in a string
 * @s: supplied string
 * Return: modified string
 */
char *cap_string(char *s)
{
    int capital = 0, i = 0;

    if (s[i] >= 'a' && s[i] <= 'z')
    {
        s[i] -= 32;
        capital = 1;
        i++;
    }
    while (s[i] != '\0')
    {
        while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || (s[i] >= '0' && s[i] <= '9'))
        {
            capital = 0;
            i++;
        }
        if ((s[i] >= 'a' && s[i] <= 'z') && capital == 0 && s[i] != '\0')
        {
            s[i] -= 32;
            capital = 1;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital = 1;
        }
        i++;
    }
    return (s);
}
