#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * _isnumber - checks if string is a number
 * @s: string
 *
 * Return: On success 1.
 * If not a number, 0 is returned.
 */
int _isnumber(char *s)
{
	int j, love, g;

	j = 0, g = 0, love = 1;
	if (*s == '-')
		j++;
	for (; *(s + j) != 0; j++)
	{
		g = isdigit(*(s + j));
		if (g == 0)
		{
			love = 0;
			break;
		}
	}
	return (love);
}
/**
 * main - Program that adds positive numbers
 *
 * @argc: number of parameters that go into main
 * @argv: array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int j, v, bh;

	bh = 0, v = 0;
	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			if (_isnumber(argv[j]))
				v += atoi(argv[j]);
			else
				bh = 1;
		}
	}
	if (bh == 0)
		printf("%i\n", v);
	else
		printf("%s\n", "Error");
	return (bh);
}
