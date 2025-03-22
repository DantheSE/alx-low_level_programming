#include "main.h"
/**
 * puts2 - prints numbers in two steps
 * @str: string received from user
 * Return: nothing
 */

void puts2(char *str)
{
  char *ptr = str;
  while (*ptr != '\0')
  {
    _putchar(*ptr);
    ptr += 2;
  }
  _putchar('\n');
}
