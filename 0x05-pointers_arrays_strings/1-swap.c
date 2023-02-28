#include "main.h"
/**
 * swap_int - takes to integers and swaps their values
 * @a: is converted to the value of b
 * @b: is converted to the value of a
 * Description: changes the value by reference of a variable
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
