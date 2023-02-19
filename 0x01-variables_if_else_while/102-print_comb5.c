#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int c = 0;
	int f_d;
	int p_d;

	int c2;
	int f_d2;
	int r_d2;

	while (c <= 98)
	{
		f_d = (c / 10 + '0');
		p_d = (c % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			f_d2 = (c2 / 10 + '0');
			r_d2 = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(f_d);
				putchar(p_d);
				putchar(' ');
				putchar(f_d2);
				putchar(r_d2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
