#ifndef DOG_H
#define DOG_H

/**
 *struct dog - structure type
 * @name: first element
 * @age: second element
 * @owner: third element
 * Description: more description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);

#endif
