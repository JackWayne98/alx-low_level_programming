#include "main.h"
#include <stdio.h>
/**
 * clear_bit - clears a bit from a binary set
 * @n: integer to receive
 * @index: indexed number to clear to 0
 * Return: 1 if successfull, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bitmask = 1UL << (unsigned long int)index;

	*n &= ~bitmask;

	return (1);
}
