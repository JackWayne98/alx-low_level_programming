#include "main.h"
/**
 * _isdigit - function
 *
 * Description: Evaluates if the output is a digit from 0 to 9
 * @c: receives an integer
 * Return: 1 if it's a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
