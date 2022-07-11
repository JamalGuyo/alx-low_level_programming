#include <string.h>
#include "main.h"

/**
 * puts_half - fn to print half a string
 * @str: parameter string
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int halfLen, i;

	if(len % 2 == 0)
	{
		halfLen = len / 2;
	}
	else
	{
		halfLen = (len - 1) / 2;
	}

	for(i = halfLen; i <= len; i++)
	{
		_putchar(str[i]);
	}
}
