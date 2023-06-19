#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *str);

/**
 * _strcpy - copies a string to another
 * @src: the source string
 * @dest: the buffer to contain the copied string
 * Return: a pointer of type char to the buffer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - return the length of the string
 * @str: the string concerned
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

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

	if (name == NULL || age < 0 || owner == NULL)
		return NULL;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (n_dog->name == NULL)
		return (NULL);

	n_dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (n_dog->owner == NULL)
		return (NULL);

	n_dog->name = _strcpy(n_dog->name, name);
	n_dog->owner = _strcpy(n_dog->owner, owner);
	n_dog->age = age;

	return (n_dog);
}
