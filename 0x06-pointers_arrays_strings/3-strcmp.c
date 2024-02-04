#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: receives an array
 * @s2: receives another array
 * Description: Function compares two arrays strings
 * Return: none
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 < *s2)
		return (-15);
	else if (*s1 > *s2)
		return (15);
	return (0);
}
