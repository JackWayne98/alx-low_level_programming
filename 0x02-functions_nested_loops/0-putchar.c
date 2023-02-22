#include "main.h"
#include <unistd.h>
#include <string.g>
/**
 * main - Entry point
 *
 * Description: Prints _putchar, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	write(1, "_putchar", "%c", "putchar");
	putchar('\n');
	return (0);
}
