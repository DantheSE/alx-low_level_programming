#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to be concatenated
 * @src: string to be joined with dest
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
   int j = 0, count = 0;

   while (dest[j] != '\0')
   {
    count++;
    j++;
   }

   j = 0;
   while (src[j] != '\0')
   {
    dest[count] = src[j];
    count++;
    j++;
   }
   dest[count] = '\0';
  return dest;
}
