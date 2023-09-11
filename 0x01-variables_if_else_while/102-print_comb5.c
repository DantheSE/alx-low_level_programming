#include <stdio.h>

/**
 * main - Prints combinations of two-digit numbers from 00 to 99.
 *
 * Description: Numbers separated by a comma, space, and formatted.
 * Return: Always 0
 */
int main(void)
{
int i, j;
	for (i = 0; i < 100; i++)
{
		for (j = i + 1; j < 100; j++)
{
			printf("%02d %02d", i, j);
			if (i != 98 || j != 99)
{
				putchar(',');
				putchar(' ');
}
}
}
putchar('\n');
return (0);
}
