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
	size_t total = size1 + size2;
	char *ptr;

	ptr = malloc(sizeof(char) * total + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		ptr[0] = '\0';
	}
	else
	{
		for (i = 0; i < size1; i++)
		{
			*(ptr + i) = *(s1 + i);
		}
	}
	if (s2 == NULL)
	{
		ptr[size1] = '\0';
	}
	else
	{
		for (i = 0; i < size2; i++)
		{
			*(ptr + size1 + i) = *(s2 + i);
		}
	}

	*(ptr + total) = '\0';

	return (ptr);
}
