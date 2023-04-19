#include <stdlib.h>

/**
 * free_dog - free a dog
 * @d: dog to free
 * Description: more here
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
