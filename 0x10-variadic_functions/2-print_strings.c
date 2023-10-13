#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator as a comma to separate strings
 * @n: number of arguments received
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(arg, char *);
		if (!p)
			p = "(nil)";
		if (!separator)
			printf("%s", p);
		else if (separator && i == 0)
			printf("%s", p);
		else
			printf("%s%s", separator, p);
	}

	printf("\n");

	va_end(arg);
}
