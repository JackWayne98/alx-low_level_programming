#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * print_to_98 - prints from n number to 98
 *
 * Description: function to print a sequence of numbers from n to 98
 * @n: receives an integer
 * Return: NA
 */
void print_to_98(int n)
{
	for (n; n <= 98; n++)
	{
		printf("%d", n);
		printf(", ");
	}
}
