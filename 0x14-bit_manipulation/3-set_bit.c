#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer to receive
 * @index: provides which bit to return
 * Return: 1 if successfull, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bitmask = 1UL << (unsigned long int)index;

	*n |= bitmask;

	return (1);
}

