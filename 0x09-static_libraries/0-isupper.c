#include "main.h"
/**
 * _isupper - check if parameter is an uppercase character.
 * @c: input character
 * Return: 1 if is un upper character, 0 in other case.
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
