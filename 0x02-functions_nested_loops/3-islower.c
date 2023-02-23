#include "main.h"
/**
 * test_islower - furnction to prints lower case
 * @c: is the char to be checked
 * Return: 1 if it is a lower case
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
