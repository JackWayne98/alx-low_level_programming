#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all possible different combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int first_row, second_row, third_row;

	for (first_row = 48; first_row <= 57; first_row++)
	{
		for (second_row = 49; second_row <= 57; second_row++)
		{
			for (third_row = 50; third_row <= 57; third_row++)
			{
				if  ((first_row != second_row) != third_row)
				{
					if ((second_row > first_row) && (third_row > second_row))
					{
					putchar(first_row);
					putchar(second_row);
					putchar(third_row);

					if (first_row == 55 && second_row == 56 && third_row == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
