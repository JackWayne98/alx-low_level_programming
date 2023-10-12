#include <stdlib.h>
/**
 * array_iterator- prints an array as a call-back function
 * @array: pointer to a char as an argument
 * @size: the size of the array
 * @action: pointer to a function as an argument
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!name || !f)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
