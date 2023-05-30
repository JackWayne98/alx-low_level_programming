#include "main.h"
/**
 * _strcpy - Copies string pointed by src, including the terminating null byte
 * @dest: receives an array
 * @src: receives the size of the array
 * Description: Function to return the string and a new line
 * Return: none
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len;

	for (len = 0; src[len] != 0; len++)
	{
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
