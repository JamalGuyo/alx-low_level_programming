#include "main.h"

/**
 * print_last_digit - fn to print last digit
 * @num: parameter
 * Return: returns last digit
 */
int print_last_digit(int num)
{
	int lastDigit;

	lastDigit = num % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
