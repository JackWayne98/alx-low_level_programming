#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * jack_bauer - prints every minute of a day
 *
 * Description: function that prints every minute from 00:00 to 23:59
 * 
 * Return: NA
 */
void jack_bauer(void)
{
	int i, j, h, k;
	
	for(k = 0; k <= 2; k++)
	{
		for(h = 0; h <= 3; h++)
		{
			for(j = 0; j <= 5; j++)
			{
				for(i = 0; i <= 9; i++)
				{
					putchar('0' + k);
					putchar('0' + h);
					putchar(':');
					putchar('0' + j);
					putchar('0' + i);
					putchar('\n');
				}
			}
		}
	}
}
