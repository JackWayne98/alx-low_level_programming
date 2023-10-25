#include "main.h"
#include <stdio.h>
/**
 * flip_bits - turns a bite set into a another
 * @n: integer to received
 * @m: integer to received
 * Return: count of 1s to flip returned
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int count = 0;

	while (difference > 0)
	{
		count = count + (difference & 1);
		difference = difference >> 1;
	}
	return (count);
}
