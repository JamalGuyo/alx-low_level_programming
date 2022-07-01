#include <stdio.h>

/**
 * main - entry point
 * Return: 0 is success
 */
int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		if (a == 'e')
		{
			continue;
		}
		else if (a == 'q')
		{
			continue;
		}
		else
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
