#include <stdio.h>
#include "main.h"
/**
 * main - Print the number of the arguments
 * @argc: number of arguments
 * @argv: array of arguments
 */
int main(int argc __attribut__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
