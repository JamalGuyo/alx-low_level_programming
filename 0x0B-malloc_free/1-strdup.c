#include <stdlib.h>
#include "main.h"

/**
 * _strdup - fn to copy string
 * @str: string to copy
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	char *p_strdup = malloc(sizeof(char) * (_strlen(str) + 1));

	if (str == NULL || p_strdup == NULL)
	{
		return (NULL);
	}
	_strcpy(p_strdup, str);
	return (p_strdup);
}
