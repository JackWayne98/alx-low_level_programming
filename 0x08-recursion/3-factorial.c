#include "main.h"
/**
 * factorial - function that returns the factorial of a number
 * by calling the fuction by itself
 * Description: prints the factorial of a number
 * @n: recieves an integer
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
