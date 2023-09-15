#ifndef MAIN_H
#define MAIN_H

/**
 *_isupper - confirms presecnce of capital letetrs
 *
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
#endif /*MAIN_H*/
