#include "main.h"
#include <stdlib.h>

/**
 * create_array - fn to create array of chars
 * @size: unsigned int size
 * @c: char
 * Return: array of strings
 */
char *create_array(unsigned int size, char c)
{
	char *p_mem = malloc(sizeof(char) * size);

	if (size == 0 || p_mem == NULL)
	{
	return (NULL);
	}
	int i = 0;

	while (i < size)
	{
	p_mem[i] = c;
	i++;
	}
	return (p_mem);

}
