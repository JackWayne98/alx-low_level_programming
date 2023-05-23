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
	int hours, minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');

			_putchar(58);

			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar(10);
		}
	}
}
