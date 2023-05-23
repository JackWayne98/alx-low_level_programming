#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * _isalpha - evaluates the alhabetic character
 *
 * Description: evaluates a character if it's c then return 1, otherwise 0
 * @c: receives a lower or uppercase character
 * Return: 1 if c is lowercase/upper, otherwise 0
 */
int _isalpha(int c)
{
	if (c == 'c' && == 'C')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
