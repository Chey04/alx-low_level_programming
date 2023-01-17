#include "dog.h"

/**
 * init_dog - function to initialize the variable
 * of type struct dog
 * @d: the variable
 * @name: an argument
 * @age: an argument
 * @owner: an argument
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
	}	d->owner = owner;
}
