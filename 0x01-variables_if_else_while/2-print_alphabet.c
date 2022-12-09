#include <stdio.h>

/**
 * main - change from uppercase letters to lowercase letters
 * without using printf fucnction
 * Return: must equal 0 if comeplete otherwise print non-zero
 */

int main(void)

{

	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		putchar(alpha);
	}
	putchar("\n")
	return (0);
}
