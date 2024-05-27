#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @a: user input collected
 * Return: absolute value of number if successful
 */

int _abs(int a)
{
	if (a < 0)
	{
		int absolute =  a * -1;

		return (absolute);
	}
	else
	{
		return (a);
	}
	return (-1);
}
