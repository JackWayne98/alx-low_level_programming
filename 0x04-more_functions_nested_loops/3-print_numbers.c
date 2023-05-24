#include "main.h"
/**
 * print_numbers - function
 *
 * Description: Prints numbers from 0 to 9 followd by a \n
 *
 * Return: none
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar(10);
}
