#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - fucntion to free up mem space from d
 *
 * @d: pointer to space to be freed
 */

void free_dog(dog_t *d)
{
	free(d);
}
