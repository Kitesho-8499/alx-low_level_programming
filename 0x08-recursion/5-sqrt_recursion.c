#include "main.h"
#include <stdio.h>
/**
 * sqrt2 - Function that returns the natural square root of a number
 * @b: same number as n
 * @a: number that iterates from 1 to n
 * Return: Success
 */
int sqrt2(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	return (sqrt2(b, a +1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 * Return: Success
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
