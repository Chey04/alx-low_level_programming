#include <stdio.h>

/**
 * main - core part of code
 *
 * Return: always 0
 */

int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;

	for( i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld\n", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);

}
