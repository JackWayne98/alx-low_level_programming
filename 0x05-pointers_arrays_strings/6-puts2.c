#include "main.h"
/**
 * puts2 - prints the string by omitting the one chararacter next to each other
 * @str: receives a string by reference
 * Description: Function to return the string and a new line
 * Return: none
 */
void puts2(char *str)
{
	int i = 0;
	int len;

	for (len = 0; str[len] != 0; len++)
	{
	}
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar(10);
}
