#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - returns a pointer to the allocated memory
 *@b: memory space
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
