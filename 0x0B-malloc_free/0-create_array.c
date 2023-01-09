#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and 
 * initializes with a specific char
 * @size: array size
 * @c: char used to initialize
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == '\0')
		return(NULL);

	ptr = (char *) malloc (size * sizeof(char));
	*ptr = c;

	return (ptr);
}
