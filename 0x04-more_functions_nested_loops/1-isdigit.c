#include "main.h"
/**
 * _isdigit - checks if a digit is present in input
 *
 * @c: character being collected from user
 * Return: 1 if it's a digit or 0 if it's not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
{
	return (1);
}
	else
{
	return (0);
}
}
