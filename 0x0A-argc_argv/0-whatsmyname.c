#include <stdio.h>
#include "main.h"
/**
 * main - print the number of program
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: Always (Success)
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
