#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer to receive
 * @index: provides which bit to return
 * Return: n if correct, -1 otherwise.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitmask;
	unsigned int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bitmask = 1UL << (unsigned long int)index;

	bit_value = (n & bitmask) ? 1 : 0;

	return (bit_value);
}
