#include "main.h"
/**
 * reset_to_98 - takes a pointer to an int as a parameter
 * and updated the value it points to 98
 * Description: changes the value by reference of a variable
 * @n: pointer to an int
 * Return: always 0
 */
void reset_to_98(int *n)
{
	*n = 98;
}
