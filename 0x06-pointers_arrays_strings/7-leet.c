#include "main.h"

/**
 * leet - function to change string to 1337 encoding
 *
 * @s: string input
 * Return: string output
 */

char *leet(char *s)
{
	int i;
	int c = 0;
	int n[] = {52, 51, 48, 55, 49};
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};

	while (s[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[c] == sl[i] || s[c] == ul[i])
			{
				s[c] = n[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
