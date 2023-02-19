#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, except for q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az != 'q' && az != 'e')
		{
			putchar(az);
		}
	}
	putchar('\n');
	return (0);
}
