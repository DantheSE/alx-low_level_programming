#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints numbers between 0 and 9, excluding 2 and 4
 * Return: nothing
 */

void print_most_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
{
continue;
}
else
{
_putchar('0' + i);
}
}
_putchar('\n');
}
