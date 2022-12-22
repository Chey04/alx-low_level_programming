#include <stdio.h>
#include "main.h"

/**
 * rot13 - encodes in rot13
 *
 * @s: pointer to string
 * Return: s
 */

char *rot13(char *s)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = data2[j];
				break;
			}
		}
	}
	return (s);
}
