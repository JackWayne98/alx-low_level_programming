#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 *@s1: string passed as a ptr
 *@s2: string passed as a ptr
 * Return: Always 0 (Success)
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	ptr = (char *)malloc(ac * sizeof(char *));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		*(ptr + i) = *(av + i);

	}								        }
}
