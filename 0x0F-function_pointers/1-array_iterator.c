#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function to execute a function of elements
 * of an array
 *
 * @array: array funtion should operate on
 * @size: size of the array
 * @action: pointer to function to be executed on array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
