#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: heigth input
 *
 * Return: Double Pointer
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int t, f, h, ch;

	ch = 0;
	if (width <= 0 || height <= 0)
		return (0);

	g = malloc(height * sizeof(int *));
	if (g == 0)
		return (0);
	for (t = 0; t < height; t++)
	{
		*(g + t) = malloc(width * sizeof(int));
		if (*(g + t) == 0)
		{
			ch = 1;
			break;
		}
		for (f = 0; f < width; f++)
		{
			g[t][f] = 0;
		}
	}
	if (ch == 1)
	{
		for (h = 0; h <= t; h++)
		{
			free(*(g + h));
		}
		free(g);
	}
	return (g);
}
