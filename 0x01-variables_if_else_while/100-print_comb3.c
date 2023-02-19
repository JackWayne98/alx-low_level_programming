#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int first_row, second_row;

	for (first_row = 48; first_row <= 57; first_row++)
	{
		for (second_row = 49; second_row <= 57; second_row++)
		{
			if  (first_row != second_row && (second_row > first_row))
			{
				putchar(first_row);
				putchar(second_row);
				if (first_row == 56 && second_row == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
