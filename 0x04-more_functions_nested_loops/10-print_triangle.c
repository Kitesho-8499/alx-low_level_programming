#include "main.h"
/**
 * print_triangle _ prints a triangle, followed by a new line
 * @size: integer
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= o)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b <= (size - 1); b++)
			 {
				 for (a = 0; a < (size - 1) - b; a++)
				 {
					 _putchar(' ');
				 }
				 for (c = 0; c <= b; c++)
				 {
					 _putchar('#');
				 }
				 putchar('\n');
			 }
	}
}
