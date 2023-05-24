#include "main.h"
/**
 * more_numbers - Prints numbers 10 times from 0 to 14
 * Return: Always 0
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 9; j++)
	{
		for (i = 1; i <= 14; i++)
		{
			if (i >= 10)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}
		putchar(10);
	}
}
