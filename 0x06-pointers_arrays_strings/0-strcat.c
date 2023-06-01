#include "main.h"
/**
 * _strcat - concatanates the src array to dest array
 * @dest: receives an array
 * @src: receives another array
 * Description: Function to return the concat string and a new line
 * Return: none
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len, len2;

	for (len = 0; dest[len] != 0; len++)
	{
	}
	for (len2 = 0; src[len2] != 0; len2++)
	{
	}
	for (i = len; len <= (len2 + len); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
