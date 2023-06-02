#include "main.h"
/**
 * _strncpy - Copies string pointed by src, including the terminating null byte
 * @dest: receives an array
 * @src: receives the size of the array
 * @n: receives an integer
 * Description: Function to return the string and a new line
 * Return: none
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len;

	for (len = 0; src[len] != 0; len++)
	{
	}
	for (i = 0; i <= len; i++)
	{
		if (i == n)
		{
			break;
		}
		dest[i] = src[i];
	}
	return (dest);
}
