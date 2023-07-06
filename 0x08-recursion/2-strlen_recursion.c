#include "main.h"
/**
 * _strlen_recursion - returns the lenght of a string
 * by calling the fuction by itself
 * Description: prints out the lenght of a string by calling a function
 * @s: takes a string of characters and printes them using puts
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
