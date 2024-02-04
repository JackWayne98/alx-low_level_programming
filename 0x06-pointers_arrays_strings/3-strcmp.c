#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: receives an array
 * @s2: receives another array
 * Description: Function compares two arrays strings
 * Return: none
 */
int _strcmp(char *s1, char *s2)
{
	int  k, len, len2;

	for (len = 0; s1[len] != '\0'; len++)
	for (len2 = 0; s2[len2] != '\0'; len2++)

	for (k = 0; s1[k] != '\0' && s2[k] != '\0'; k++)
	{
		if (s1[k] == s2[k])
		{
			k++;
		}
		else if (s1[len] < s2[len2])
		{
			return (-15);
		}
		else if (s2[len2] < s1[len])
		{
			return (15);
		}
	}
	return (0);
}
