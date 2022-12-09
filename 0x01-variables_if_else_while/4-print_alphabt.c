#include <stdio.h>

/**
 * main - print out lowercase letters except e and q
 * Return: 0 if sucessful and non zero 0therwise
 */

int main(void)

{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);

		}

		alpha++;
	}
	putchar('\n');


	return (0);
}
