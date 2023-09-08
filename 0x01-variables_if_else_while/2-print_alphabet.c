#include <stdio.h>

/**
 *main - prints all letters of alphabet in lowercase
 *
 *Return: Always 0
 */

int main(void)
{

	for (int x = 'A'; x <= 'Z'; x++)
	{
	putchar(tolower(x));
	}

	return (0);
}

