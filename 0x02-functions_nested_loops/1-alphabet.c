#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * function - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: the alphabet
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
