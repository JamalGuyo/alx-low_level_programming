#include <string.h>

/**
 * *_strchr - fn to search character in a string
 * @s: string to search in
 * @c: character to search
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	if (strlen(s) > 0)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == c)
			{
				return &(s[i]);
			}
		}
	}
	return (NULL);
}
