#include <stdio.h>
#include "main.h"
/**
 * main - Program that multiplies two numbers
 * @argc: number of parameters that go into main
 * @argv: array of pointers containing strings entering main
 * Return: Alway 0 (success)
 */
int main(int argc, char **argv)
{
	int xy, mn;

	mn = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		mn = 1;
	}
	else
	{
	xy = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%i\n", xy);
	}
	return (mn);
}
