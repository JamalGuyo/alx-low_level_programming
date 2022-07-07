#include "main.h"

/**
 * print_square - fn print square
 * @size: parameter
 * Return: void
 */
void print_square(int size)
{
	int col, row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 1; col <= size; col++)
		{
			for (row = 1; row <= size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
