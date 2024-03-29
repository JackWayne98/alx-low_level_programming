#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that prints the minimum number of cents you need to give back
 *@argc: number of arguments
 *@argv: string with arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int cents = 0, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		cents = (cents >= 25) ? cents - 25 :
			(cents >= 10) ? cents - 10 :
			(cents >= 5)  ? cents - 5  :
			(cents >= 2)  ? cents - 2  : cents - 1;
		coins++;
	}

	printf("%d\n", coins);
	return (0);
}
