#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - fn
 * @n: parameter
 * Return: 0 success
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
	_putchar('\n');
}
