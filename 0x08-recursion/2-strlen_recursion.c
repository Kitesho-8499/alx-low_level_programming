#include "main.h"
/**
 * _strlen_recursion - function that prints a string in reverse
 * @s: the string to be print
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}

