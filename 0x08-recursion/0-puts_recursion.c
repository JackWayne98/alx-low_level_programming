#include "main.h"
/**
 * _puts_recursion - uses the puts method to print out a string
 * by calling the fuction by itself
 * Description: prints out a string of characters using recursion
 * @s: takes a string of characters and printes them using puts
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}
}
