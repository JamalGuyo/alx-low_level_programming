#include <stdlib.h>
#include <string.h>

/**
 * _strdup - fn to copy string
 * @str: string to copy
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	char *p_dup = malloc(sizeof(char) * (strlen(str) + 1));
	int i;

	if (str == NULL || strlen(str) <= 0 || p_dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		p_dup[i] = str[i];
	}

	return (p_dup);
}
