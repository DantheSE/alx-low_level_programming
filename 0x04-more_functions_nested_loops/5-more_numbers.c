#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 0 to 14, 14 times
 * Return: Always 0.
 */

void more_numbers(void)
{
int i;
int j;

for (i = 1; i <= 10; i++)
{
for (j = 0; j < 15; j++)
{
if (j >= 10)
{
_putchar(j / 10 + '0');
}
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
