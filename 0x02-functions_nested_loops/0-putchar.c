#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Description: Prints _putchar, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	write(1, "_putchar", strlen("_putchar"));
	putchar(10);

	return (0);
}
