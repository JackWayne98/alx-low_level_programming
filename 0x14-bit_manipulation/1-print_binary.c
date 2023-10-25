#include "main.h"
#include <stdio.h>
/**
 * print_binary - convert a binary into decimal
 * @n: integer to receive
 */
void print_binary(unsigned long int n)
{
	unsigned int remain;

	if (n > 1)
	{
		print_binary(n >> 1);
	}

	putchar(n & 1 ? '1' : '0');
}
