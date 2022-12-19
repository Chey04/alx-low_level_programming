#include "main.h"

/**
 * print_array - function to print n elements
 * of an array
 * @a: pointer address
 * @n: variable
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] != '\0'; ++a)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
