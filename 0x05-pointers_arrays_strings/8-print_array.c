#include "main.h"
/**
 * print_array - Prints an array
 * @a: receives an array
 * @n: receives the size of the array
 * Description: Function to return the string and a new line
 * Return: none
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar(10);
}
