#include "main.h"

/**
 * print_alphabet - function printing alphabets in lowercase
 * Return: void returns nothing
 */
void print_alphabet(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
