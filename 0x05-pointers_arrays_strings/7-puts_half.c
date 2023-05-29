#include "main.h"
/**
 * puts_half - Prints half of the string
 * @str: receives a string by reference
 * Description: Function to return the string and a new line
 * Return: none
 */
void puts_half(char *str)
{
	int i = 0;
	int len;

	for (len = 0; str[len] != 0; len++)
	{
	}
	for (i = (len) / 2; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar(10);
}
