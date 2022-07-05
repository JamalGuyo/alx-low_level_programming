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
		newNum  = -1 * (num);
	}
	else
	{
		newNum = num;
	}
	lastDigit = newNum % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
