#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (power = 1, total = 0, i--; i >= 0; i--, power *= 2)
	{
		if (b[i] == '1')
		{
			total += power;
		}
		if (i == 0)
		{
			break;
		}
	}
	return (total);
}
