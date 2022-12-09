#include <stdio.h>

/**
 * main - print out uppercase and lowercase letters
 * Return: 0 if sucessful and non-zero otherwise
 */

int main(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');


	return (0);
}
