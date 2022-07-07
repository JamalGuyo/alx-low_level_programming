#include "main.h"

/**
 * _isupper - fn finding upper and lower case
 * @c: parameter, a character
 * Return: 0 is lower and 1 is upper
 */
int _isupper(int c)
{
	int a = 'a';

	while (a <= 'z')
	{
		if (c == a)
		{
			return (0);
		}
		a++;
	}
	return (1);
}
