#include "main.h"
/**
 * checker - reviews if a number is a prime or not
 * by calling the fuction by itself
 * Description: prints out 1 if it's prime otherwise 0
 * @n: receives an integer
 * @base: receives an integer
 * Return: always 0
 */
int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
	{
		return (0);
	}
	if (n == base - 1)
	{
		return (1);
	}
	else if (base > n)
	{
		return (checker(n + 1, base));
	}
	return (1);
}
/**
 * is_prime_number - returns 1 if it's a prime or 0 if it's not
 * by calling the fuction by itself
 * Description: prints out the prime of a number by using 1
 * @n: receives an integer
 * Return: always 0
 */
int is_prime_number(int n)
{
	return (checker(2, n));
}
