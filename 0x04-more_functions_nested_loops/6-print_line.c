#include "main.h"

/**
 * print_line - fn to print line
 * @n: parameter - number
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
