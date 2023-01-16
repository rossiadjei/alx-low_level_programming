#include "dog.h"
#include <stdlib.h>

/**
 * free - free dog structure
 * @d : pointer to dog
 *
 * Return - Return void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
