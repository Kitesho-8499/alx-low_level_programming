#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Program that prints the minimum number of coins
 * To make change for an amount of money
 * @argc: Counts the number of parameters
 * @argv: array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int r, pf, coins, cents, y;
	int m[5] = {25, 10, 5, 2, 1};

	pf = 1, r = 0, coins = 0;
	if (argc == 2)
	{
		if (_isnumber(argv[1]))
		{
			pf = 0, cents = atoi(argv[1]);
			if (cents >= 0)
			{
				while (cents != 0)
				{
					y = cents / m[r];
					if (y == 0)
					{
						r++;
					}
					else
					{
						coins += y;
						cents -= (y * m[r]);
					}
				}
			}
		}
	}
	if (pf == 0)
		printf("%i\n", coins);
	else
		printf("%s\n", "Error");
	return (pf);
}
/**
 * _isnumber - if string is a number
 * @s: string
 *
 * Return: On success 1.
 * If not a number, 0 is returned.
 */
int _isnumber(char *s)
{
	int w, smart, y;

	w = 0, y = 0, smart = 1;
	if (*s == '-')
		w++;
	for (; *(s + w) != 0; w++)
	{
		y = isdigit(*(s + w));
		if (y == 0)
		{
			smart = 0;
			break;
		}
	}
	return (smart);
}
