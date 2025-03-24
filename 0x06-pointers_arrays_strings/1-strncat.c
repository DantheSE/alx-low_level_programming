#include "main.h"
/**
 * _strncat - concatenates two strings, taking in n number of chars from string two
 * @dest: string to be concatenated
 * @src: string to be joined with dest
 * @n: number of characters taken from string two
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
   int j = 0, i = 0, count = 0, srcCount = 0;

   while (dest[j] != '\0')
   {
    count++;
    j++;
   }

   while (src[i] != '\0')
   {
    srcCount++;
    i++;
   }

   j = 0;

   if (n > srcCount ) 
   {
    while (src[j] != '\0')
    {
        dest[count] = src[j];
        count++;
        j++;
    }
   }
   else
   {
    while (src[j] != '\0' && j < n)
    {
        dest[count] = src[j];
        count++;
        j++;
    }
   }
   dest[count] = '\0';
  return dest;
}
