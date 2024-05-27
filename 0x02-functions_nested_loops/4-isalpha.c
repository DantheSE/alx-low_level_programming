#include "main.h"
/**
 * _isalpha - checks for an alphabetical character
 * @c: variable collected from user
 * Return: 1 for success, 0 for failure
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (-1);
}
