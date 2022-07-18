/**
 * *_memset - fn to set mem
 * @s: array of characters
 * @b: character
 * @n: unassignd int
 * Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	if (n > 0 && sizeof(s) > 0)
	{
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
