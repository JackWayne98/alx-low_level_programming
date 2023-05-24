#include "main.h"
/**
 * print_square - function
 *
 * Description: Prints a squared followed by a new line
 * @size: prints X number of squares based on an integer
 * Return: Always 0
 */
void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		putchar(35);
	}
	putchar(10);

	if (size <= 0)
	{
		putchar(10);
	}
}
