#include "function_pointers.h"

/**
 * int_index - function to search for int
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to a comparison funtion
 * Return: the elements index number, 0 or -1 for errors
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	if (array && size && cmp)
	{
		int i, val;

		for (i = 0; i < size; i++)
		{
			val = cmp(array[i]);

			if (val != 0)
				return (i);
		}
	}
	return (-1);
}
