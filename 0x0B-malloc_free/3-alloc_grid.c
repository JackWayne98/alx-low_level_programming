#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * alloc_grid -function that returns a pointer
 * to a 2 dimensional array of integers.
 *@width: integer
 *@height: integer
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc((width * sizeof(int)));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		ptr[i] = malloc((height * sizeof(int)));

		if (ptr[i] == NULL)
		{
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
