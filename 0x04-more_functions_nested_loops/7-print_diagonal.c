#include "main.h"
/**
 * print_diagonal - function
 *
 * Description: Draws a diagonal line on the terminal
 * @n: receives an integer positive or negative
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i, k;

	for (i = 0; i < n; i++)
	{
		putchar(92);
		putchar(10);

		for (k = -1; k < i; k++)
		{
			putchar(32);
		}
	}
	if (n <= 0)
	{
		putchar(10);
	}
}
