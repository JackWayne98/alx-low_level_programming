#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * print_alphabet - prints the alhpabet in lowercase, followed by a new line.
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Return: none
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar(10);
}
