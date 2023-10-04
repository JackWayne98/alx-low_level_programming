#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: string with arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, mul;

	if (argc > 1)
	{
		for (i = 2; i < argc; i++)
		{
			if (atoi(argv[i]) >= 0)
			{
				mul = atoi(argv[i - 1]) * atoi(argv[i]);
			}
		}
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
