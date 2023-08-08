#include <stdio.h>
#include "main.h"
/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 * Return: On success 1
 * On error, -1is return and err no is set appropriately
 */
int _purchar(char c)
{
	return (write(1, &c, 1));
}
