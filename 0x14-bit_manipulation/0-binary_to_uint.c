#include <stdio.h>
#include <math.h>
#include <string.h>

/**
  * binary_to_uint - fn to convert binary to decimal
  *@b: char str containing the bits
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	/* get length of str */
	unsigned int i, sum;
	unsigned int str_l = strlen(b);

	sum = 0;
	/* printf("%i\n", str_l); */

	if (b == NULL)
	return (0);
	for (i = 0; i < str_l; i++)
	{
	/* printf("%d\n", (int)(pow(2, i))); */
	/* printf("%d\n", (b[str_l - 1 - i] - '0')); */
	if (b[i] != '1' && b[i] != '0')
	{
	return (0);
	}
	sum = sum + ((int) pow(2, i) * (b[str_l - 1 - i] - '0'));
	}
	return (sum);
}
