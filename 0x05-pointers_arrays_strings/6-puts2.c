#include <string.h>
#include "main.h"

/**
 * puts2 - fn to print every other character
 * @str: string parameter
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
