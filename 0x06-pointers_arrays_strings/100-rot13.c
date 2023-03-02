#include "main.h"
#include <stdio.h>
/**
 * rot13 - encode rot13
 * @s: pointer to string
 * Return: *s
 */
char *rot13(char *)
{
	int i;
	int j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghiklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = o; j < 52; j+=)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
