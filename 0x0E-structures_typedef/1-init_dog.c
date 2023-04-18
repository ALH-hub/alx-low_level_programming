#include "dog.h"
#include <stdlib.h>
#include <limits.h>

/**
 * init_dog - initialize a variable of type strct dog
 * @d: the structure variable name
 * @name: the first member
 * @age: second member
 * @owner: third member
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
