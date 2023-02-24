#include <stdio.h>
/**
 * main - print numbers from 1 to 100
 * Return: 0
 */
int main(void)
{
	int i;
	char a[] = "Fizz"
	char b[] = "Buzz"
	char ab[] = "FizzBuzz"

	for (i = 1; i <= 100; i++)
	{
		if (i = 100)
			printf("%s ", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", ab);
		else if (i % 3 == 0)
			print("%s ", a);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	print('\n');
	return (0);
}
