#include "main.h"

/**
 * print_numbers - fn to print 0 - 9
 * Return: print nums plus new line
 */
void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
