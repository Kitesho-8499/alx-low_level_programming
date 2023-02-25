#include "main.h"
/**
 * _isupper - checks uppercase character
 * @C: char to check
 * Return: 1 if 'c' otherwise 0
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
