#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: string with arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, j, adds = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			char *arg = argv[i];

			for (j = 0; arg[j] != '\0'; j++)
			{
				if (!isdigit(arg[j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			if (atoi(argv[i]) >= 0)
			{
				adds += atoi(argv[i]);
			}
		}
		printf("%d\n", adds);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
