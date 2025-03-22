#include "main.h"
/**
 * puts2 - prints numbers in two steps
 * @str: string received from user
 * Return: nothing
 */

void puts2(char *str)
{
  while (*str != '\0')
  {
    _putchar(*str);
    str += 2;
  }
  _putchar('\n');
}
