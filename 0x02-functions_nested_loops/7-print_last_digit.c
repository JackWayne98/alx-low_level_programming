#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * print_last_digit - prints the last digit of a number
 *
 * Description: function that prints the last digit of a number n
 * @n: receives a integer value
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
	int j = n % 10;

	_putchar(j + '0');
	if (j < 0)
	{
		j *= -1;
	}

	return (j);
}
