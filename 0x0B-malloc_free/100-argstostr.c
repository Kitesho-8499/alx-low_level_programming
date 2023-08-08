#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *y;
	int n, za, b, ch, d;

	if (ac == 0 || av == NULL)
		return (0);
	n = 0, d = 0;
	for (b = 0; b < ac; b++)
	{
		za = 0;
		while (av[b][za])
			za++;
		n += za + 1;
	}
	y = malloc((n + 1) * sizeof(char));

	if (y == 0)
		return (0);

	for (ch = 0; ch < ac; ch++)
	{
		za = 0;
		while (av[ch][za])
		{
			*(y + d) = av[ch][za];
			d++;
			za++;
		}
		*(y + d) = '\n';
		d++;
	}
	*(y + d) = '\0';

	return (y);
}
