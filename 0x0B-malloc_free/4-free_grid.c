#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free a 2 dimension grid previously
 * @grid: matrix double pointer
 * @height: rows (pointer)
 * Return: Nothing 
 */
void free_grid(int **grid, int height)
{
	int gy;

	for (gy = 0; gy < height; gy++)
	{
		free(*(grid + gy));
	}
	free(grid);
}
