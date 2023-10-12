#include <stdlib.h>
/**
 * int_index - call back functin to get an index
 * number from an array
 * @array: pointer to array as an argument
 * @size: lenght of the array
 * @cmp: pointer to function
 * Return: 1 if found -1 if not found
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
	{
		return 0;
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
