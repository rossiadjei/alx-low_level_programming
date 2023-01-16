#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a dog structure
 * @d : a pointer to dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
	{
		printf("Name: (nill)\n");
	}
	else
		printf("Name: %s\n",(*d).name);
	if ((*d).age == NULL)
	{
		printf("Age: (nill)\n");
	}
	else
		printf("Age: %f\n",(*d).age);
	if ((*d).owner == NULL)
	{
		printf("Owner: (nill)\n");
	}
	else
		printf("Owner: %s\n",(*d).owner);
}
