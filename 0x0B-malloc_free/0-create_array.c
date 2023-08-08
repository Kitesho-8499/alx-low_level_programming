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
char *create_array(unsigned int size, char c);
{
	char *s;
        unsigned int i;

        if (size <= 0)
                return (0);

        s = malloc(sizeof(char) * size);
        if (s == 0)
                return (0);

        for (i = 0; i < size; i++)
                *(s + i) = c;
        *(s + i) = '\n';
	return (0);
}
