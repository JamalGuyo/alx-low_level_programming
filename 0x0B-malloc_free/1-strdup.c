#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - fn to copy string
 * @str: string to copy
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	char *p_strdup = malloc(sizeof(char) * (strlen(str) + 1));
	int i;

	if (p_strdup == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p_strdup[i] = str[i];
	}
	p_strdup[i + 1] = '\0';

	return (p_strdup);
}
