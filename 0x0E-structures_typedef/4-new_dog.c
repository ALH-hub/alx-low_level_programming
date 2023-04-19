#include <stdlib.h>
#include <limits.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: creating a new dog simply
 * Return: pointer to newdog or NULL if failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;
	return (n_dog);
}
