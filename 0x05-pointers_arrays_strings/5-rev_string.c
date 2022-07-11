#include <string.h>
#include "main.h"

/**
 * rev_string - fn to rev string
 * @s: parameter string
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
