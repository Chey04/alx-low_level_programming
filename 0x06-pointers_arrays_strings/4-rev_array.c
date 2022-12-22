#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: location of array
 * @n: number of array elements
 */

void reverse_array(int *a, int n)
{
	int temp, i;
	int arr[];

	for (i = 0; i < n / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
}
