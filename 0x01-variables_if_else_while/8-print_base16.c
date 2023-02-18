#include <stdio.h>
/**
 * main - Program that print a numbers of base 16 in the lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char ck;

	for (num = '0'; num < 10; num++)
		putchar((num % 10) + '0');
	for (ck = 'a'; ck <= 'f';  ck++)
		putchar(ck);
	putchar('\n');
	return (0);
}
