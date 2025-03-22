#include "main.h"
/**
 * puts_half - prits second half of a string
 * @str: string received from user
 * Return: nothing
 */

void puts_half(char *str)
{
  int length = 0, half, i = 0;
  char *temp = str;

  while (*temp != '\0')
  {
    length++;
    temp++;
  }

  if (length % 2 != 0)
  {
    half = ((length - 1) / 2);
  }

  if (length % 2 == 0)
  {
    half = length / 2;
  }

  while (i < half)
  {
    str++;
    i++;
  }

  while (str < temp)
  {
    _putchar(*str);
    str++;
  }
  _putchar('\n');
}
