#include "main.h"
#include <stdlib.h>

/**
 * array_range - The array created should contain all the values.
 * @min: value of the array
 * @max: value of the array
 * Return: Return the array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = ((max-min) + 1);
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (str);
}
