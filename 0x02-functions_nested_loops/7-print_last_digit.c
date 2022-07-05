#include "main.h"

/**
 * print_last_digit - fn to print last digit
 * @num: parameter
 * Return: returns last digit
 */
int print_last_digit(int num)
{
	int lastDigit, newNum;

	if (num < 0)
	{
		newNum = -num;
		lastDigit = newNum % 10;
	}
	else if (num == 0)
	{
		lastDigit = num;
	}
	else
	{
		lastDigit = num % 10;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
