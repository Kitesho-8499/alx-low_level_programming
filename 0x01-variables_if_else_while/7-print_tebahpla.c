#include <stdio.h>
/**
 * main - Print the lowercase aiphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ge;

	for (ge = 'z' ; ge >='a'; ge--)
		putchar(ge);
	putchar('\n');
	return (0);
}
