#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * print_sign - reviews if a number is greater, equal or less than 0
 *
 * Description: if a number is greater then return 1 plus a + sign
 * if the number is equal to zero, then return 0 + 0,
 * if the number is less than zero, then retuen - sign + -1
 * @n: receives a number integer
 * Return: 1, 0 or -1
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
