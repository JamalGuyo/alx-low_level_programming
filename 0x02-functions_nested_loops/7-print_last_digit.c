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
	return (lastDigit);
}
