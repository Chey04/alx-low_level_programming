#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure definition
 * @name: one parameter
 * @age: one parameter
 * @owner: one parameter
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(const char *str);
char *_strcopy(char *dest, char *src);
void free_dog(dog_t *d)


#endif
