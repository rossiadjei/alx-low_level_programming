#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a dog structure
 * @d : A pointer to dog
 * @name : name of dog
 * @age : age of dog
 * @owner : owner of dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
