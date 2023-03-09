#include "main.h"
/**
 * _memset -Filkl a block of memory with a specific value
 * @s: starting the address of meory to be filled
 * @b: the desired value
 * @n: number of bytes to be charged
 * Return: charge the array value with new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
