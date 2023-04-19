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

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);

#endif
