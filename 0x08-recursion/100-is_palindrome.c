#include "main.h"
#include <stdio.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 * Return: Success
 */
int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}
