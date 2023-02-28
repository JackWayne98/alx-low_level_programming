#include "main.h"
/**
 * rev_string - prints in reverse
 * @s: receives a string by reference and reverses it
 * Description: Function to return the string and a new line
 * Return: none
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	char tmp;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
