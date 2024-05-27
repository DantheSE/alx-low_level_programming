#include "main.h"
/**
 * _islower - checks if a letter is lowercase
 * @c: letter collected from user
 * Return: returns one if true, zero if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (-1);
}
