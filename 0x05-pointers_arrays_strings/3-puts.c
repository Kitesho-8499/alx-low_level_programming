#include "main.h"
/**
 * _puts - Print a string followed by a new line to stdoutf
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		puts(*str++);
	}
	puts('\n');
}
