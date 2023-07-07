#include "main.h"
/**
 * checker - reviews if a number is a square roor or not
 * by calling the fuction by itself
 * Description: prints out the square root of a number
 * @n: receives an integer
 * @base: receives an integer
 * Return: always 0
 */
int checker(int n, int base)
{
	if (n * n == base)
	{
		return (n);
	}
	if (n * n > base)
	{
		return (-1);
	}
	return (checker(n + 1, base));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * by calling the fuction by itself
 * Description: prints out the square root of a number
 * @n: receives an integer
 * Return: always 0
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
