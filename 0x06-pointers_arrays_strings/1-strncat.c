#include "main.h"
/**
 * _strncat - concatanates the src array to dest array based on n
 * @dest: receives an array
 * @src: receives another array
 * @n: receives an integer
 * Description: Function to return the concat string and a new line
 * Return: none
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int len, len2;;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	for (len2 = 0; src[len2] != '\0'; len2++))
	{
		if (len2 == n)
		{
			break;
		}
	}
	while (src[j] != '\0')
	{
		dest[len] = src[j];
		j++;
		len++;
		if (j == len2)
		{
			break;
		}
	}
	return (dest);
}
