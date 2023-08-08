#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create array - create array of size and assign char c
 * @c: char to array
 * @size: size of array
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}


