#include "main.h"
/**
 * print_array - prints an array of integers
 * @a: address of first array
 * @n: Number of array elements to be printed
 * Return: Nothing
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