#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: takes a string and reverts its content
 * Description: Function to return the string and a new line
 * Return: none
 */
void print_rev(char *s)
{i
	int i, j, x = 0;
	char *f = s;
	char temp[100];

	while (*s != '\0')
	{
		s++;
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		temp[x] = f[j];
		printf("%c", temp[x]);
		x++;
	}
}
