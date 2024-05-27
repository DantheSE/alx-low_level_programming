#include "main.h"
/**
 * main - prints full alphabet lower case
 *
 * Description: prints lowercase alphabet
 * Return: Always(0) Success
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
