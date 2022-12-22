#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: location of array
 * @n: number of array elements
 */

void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;

	while (s < e)
	{
		temp = a[e];
		a[s] = a[e];
		arr[e] = temp;
		s++;
		e--;
	}
}
