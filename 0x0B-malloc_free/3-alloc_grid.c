#include <stdlib.h>

/**
 * alloc_grid - fn to create alloc grid
 * @width: width
 * @height: height
 * Return: pointer to pointer
 */
int **alloc_grid(int width, int height)
{
	int **my_array, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* create pointers to the rows */
	my_array = malloc(sizeof(int *) * height);

	if (my_array == NULL)
	{
		return (NULL);
	}

	/* loop through the rows of pointers and create width*/
	for (i = 0; i < height; i++)
	{
		my_array[i] = malloc(sizeof(int) * width);

		if (my_array[i] == NULL)
		{
			return (NULL);
		}

		/* assign 0 to all the spaces */
		for (j = 0; j < width; j++)
		{
			my_array[i][j] = 0;
		}
	}

	return (my_array);
}
