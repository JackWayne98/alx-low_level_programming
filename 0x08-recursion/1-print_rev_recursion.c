#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * by calling the fucttion by itself
 * Description: prints out a reversed string
 * @s: takes a string of characters
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}
}
