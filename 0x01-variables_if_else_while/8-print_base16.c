#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char n, a;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar(10);
	return (0);
}
