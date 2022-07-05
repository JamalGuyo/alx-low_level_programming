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
			printf("%d", (cols * rows));
		}
		putchar('\n');
	}

	putchar('\n');
}
