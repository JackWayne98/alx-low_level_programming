#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *@str: string passed as a ptr
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *ptr;
	size_t size = (str != NULL) ? strlen(str) : 0;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = *(str + i);
	}

	return (ptr);
}
