#include "main.h"
/**
 * _strlen - sends back the lenght of a string
 * @s: is a pointer to the original string
 *i Description: Function to reurn the lenght of a string
 * Return: always 0
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		s++;
		x++;
	}
	return (x);
}
