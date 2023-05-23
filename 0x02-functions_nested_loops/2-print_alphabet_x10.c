#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10x
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Return: none
 */
void print_alphabet_x10(void)
{
	int j;
	char i;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			putchar(i);
		}
		putchar(10);
	}
}
