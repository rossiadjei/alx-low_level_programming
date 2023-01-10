#include <stdio.h>
#include <stdlib.h>
#include "main.h

/**
 * create_array - creates an array of characters
 * @c: the strings
 * @size: the size of the array
 *
 * Return: in pointers
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	i = 0;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		*(ptr +1) = c;
		i++
	}
	return (ptr);
}
