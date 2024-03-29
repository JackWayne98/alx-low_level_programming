#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 *@min: integer values
 *@max: integer values
 * Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;

	ptr = malloc(sizeof(int) * (size));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = i + min;
	}

	return (ptr);
}
