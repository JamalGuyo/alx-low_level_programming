#include "main.h"

/**
 * jack_bauer - fn description
 * Return: returning time
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
		for (j = 0; j <= 9; j++)
		{
			_putchar(j + '0');
			for (k = 0; k <= 9; k++)
			{
				_putchar(k + '0');
				for (l = 0; l <= 9; l++)
				{
					_putchar(l + '0');
				}
			}
		}
	}
	_putchar('\n');
}
