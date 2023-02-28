#include "main.h"
/**
 * rev_string - prints in reverse
 * @s: receives a string by reference and reverses it
 * Description: Function to return the string and a new line
 * Return: none
 */
void rev_string(char *s)
{
	int i, j, x = 0;
	char *f = s;
	char temp[1000];

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
	printf("\n");
}
