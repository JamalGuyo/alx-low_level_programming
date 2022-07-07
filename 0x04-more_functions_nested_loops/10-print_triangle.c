#include "main.h"

/**
 * print_triangle - fn to print triangle
 * @size: parameter
 * Return: void
 */
void print_triangle(int size)
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
			for (row = size; row >= col; row--)
			{
				if (row != 1)
				{
					_putchar(' ');
				}
			}
			while (row)
			{
				_putchar('#');
				row--;
			}

			_putchar('#');
			_putchar('\n');
		}
	}
}
