#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function to print a struct dog data type
 * @d: value to be printed
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{

		if ((*d).name == NULL)
			printf("Name: (nil)\n");
		printf("Name: %s\n", (*d).name);

		printf("Age: %f\n", (*d).age);

		if ((*d).owner == NULL)
			printf("Owner: (nil)\n");
		printf("Owner: %s\n", (*d).owner);
	}
}
