#include <stdio.h>

/**
 * main - Prints combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Loop for the first two-digit number */
	for (int i = 0; i <= 99; i++)
	{
		/* Loop for the second two-digit number */
		for (int j = i; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}

