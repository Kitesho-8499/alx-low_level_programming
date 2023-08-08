#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: string to copy
 * Return: pointer
 */
char *_strdup(char *str)
{
	int x, y;
	char *s;

	if (str == NULL)
		return (0);

	x = 0;
	while (*(str + x))
		x++;

	s = malloc(sizeof(char) * x + 1);

	if (s == 0)
		return (0);

	for (y = 0; y <= x; y++)
	{
		*(s + y) = *(str + y);
	}
	return (s);
}
