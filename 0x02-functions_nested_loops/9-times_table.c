#include <stdio.h>
#include "main.h"

/**
 * times_table - fn
 * Return: return
 */
void times_table(void)
{
	int cols, rows;

	for (rows = 0; rows <= 9; rows++)
	{
		for (cols = 0; cols <= 9; cols++)
		{
			int mult = cols * rows;

			if (mult <= 9)
			{
				if (cols != 9)
				{
					printf("%d, ", mult);
				}
				else
				{
					printf(" %d", mult);
				}
			}
			else
			{
				if (cols != 9)
				{
					printf("%d, ", mult);
				}
				else
				{
					printf(" %d", mult);
				}
			}
		}
		putchar('\n');
	}

	putchar('\n');
}
