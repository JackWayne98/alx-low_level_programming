#include "main.h"
/**
 * swwap - takes a pointer to an int as a parameter
 * and updated the value it points to 98
 * Description: changes the value by reference of a variable
 * @n: pointer to an int
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
        int temp = *a;
	*a = *b;
	*b = temp;
}
