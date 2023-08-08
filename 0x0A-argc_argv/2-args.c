#include <stdio.h>
#include "main.h"
/**
 * main - print all arguments it recieves
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int j;

	if (argc > 0)
	{
		for (j = 0; j < argc; j++)
		{
			printf("%s\n", argv[j]);
		}
	}
	return (0);
 }
