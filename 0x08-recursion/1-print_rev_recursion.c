#include "main.h"
/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: string
 *
 * Return: On success 1
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
