#include <stdio.h>

/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: string with arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	void(argv);
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
		}
		printf("%d\n", i - 1);
	}
	else
	{
		printf("\n");
	}
	return (0);
}
