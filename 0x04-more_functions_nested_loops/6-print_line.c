#include "main.h"
/**
 * print_line - function
 *
 * Description: Draws a straight line in the terminal
 * @n: receives an integer positive or negative
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar(95);
		if (i == (n - 1))
		{
			putchar(10);
		}
	}
	if (n <= 0)
	{
		putchar(10);
	}
}
