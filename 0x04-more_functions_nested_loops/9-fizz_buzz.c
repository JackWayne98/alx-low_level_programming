#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description: The Fizz-buzz test
 * Return: Always 0
 */
void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
}
