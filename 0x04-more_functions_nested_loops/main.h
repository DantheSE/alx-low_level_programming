#ifndef MAIN_H
#define MAIN_H

/**
 *_isupper - confirms presecnce of capital letetrs
 *
 * @c: the character to check
 * Return: 0 or 1
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * _isdigit - checks if a character is a digit between 0 and 9
 * @c: the character to check
 *
 * Return:
 * 1 if the character is a digit between 0 and 9, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
#endif /*MAIN_H*/
