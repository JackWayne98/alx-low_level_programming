#include <stdlib.h>
#include "3-calc.h"
/**
 * print_name - prints the name through a call-back function
 * @name: pointer to a char as an argument
 * @f: pointer to a function as an argument
 **/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;


}
