#include "main.h"
/**
 * _strlen_recursion - function that prints a string in reverse
 * @s: the string to be print
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s);
}
