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
	int j = 0;
	int len;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	while (src[j] != '\0')
	{
		dest[len] = src[j];
		j++;
		len++;
	}
	return (dest);
}
