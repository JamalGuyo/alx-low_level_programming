#include <stdio.h>

/**
 * main - entry point
 * Return: 0 is success
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		else
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
