#include <string.h>
#include "main.h"

/**
 * print_rev - fn to reverse string
 * @s: parameter string s
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
