#include <stdlib.h>
/**
 * print_name - prints the name through a call-back function
 * @name: pointer to a char as an argument
 * @f: pointer to a function as an argument
 **/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}

	f(name);
}
