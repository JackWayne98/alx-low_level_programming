#include "main.h"
/**
 * _pow_recursion - Function returns the value of X raised to the power of y
 * by calling the fuction by itself
 * Description: prints out the power of X raised to the power of y
 * @x: integer
 * @y: integer
 * Return: always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
