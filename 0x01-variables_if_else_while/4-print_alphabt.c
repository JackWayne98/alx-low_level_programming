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
	int  az;

	for (az = 97; az <= 122; az++)
	{
	  if (az != 101 &&  az != 113)
	    {
	      putchar(az);
	    }
	}
	putchar('\n');
	return (0);
}