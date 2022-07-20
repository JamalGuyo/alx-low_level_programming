/**
 * _strlen_recursion - fn to print length of string
 * @s: string parameter
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
