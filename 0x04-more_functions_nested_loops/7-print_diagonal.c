#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer
 */
void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
	{
		putchar('\n')
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			for (k = 1; k < j; k++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
