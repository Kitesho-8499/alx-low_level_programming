#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @C : char to check
 * Return: 0 or 1
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z' i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
