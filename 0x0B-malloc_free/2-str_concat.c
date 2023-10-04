#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 *@s1: string passed as a ptr
 *@s2: string passed as a ptr
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	size_t size1 = (s1 != NULL) ? strlen(s1) : 0;
	size_t size2 = (s2 != NULL) ? strlen(s2) : 0;
	size_t total = strlen(s1) + strlen(s2);
	char *ptr;

	ptr = malloc(sizeof(char) * total + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	for (i = 0; i < strlen(s2); i++)
	{
		*(ptr + size1 + i) = *(s2 + i);
	}

	*(ptr + total) = '\0';

	return (ptr);
}
