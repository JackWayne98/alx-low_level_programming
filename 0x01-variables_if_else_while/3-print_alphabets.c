#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowecase followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
char lower, upper;

	for (lower = 97; lower <= 122; lower++)
	{
		putchar(lower);
	}
	for (upper = 65; upper <= 97; upper++)
	{
	  putchar(upper);
	}
	putchar('\n');
	return (0);
}
