#include "main.h"
/**
 * _strcpy - copies a string into another
 * @dest: string to be copied into
 * @source: string to be copied
 * Return: returns the new string
 */

char *_strcpy(char *dest, char *source)
{
    int i = 0;

   while (source[i] != '\0')
   {
    dest[i] = source[i];
    i++;
   }
    dest[i] = '\0';
	return dest;
}