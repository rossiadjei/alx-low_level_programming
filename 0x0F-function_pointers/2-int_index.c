#include "function_pointers.h"

/**
 * int_index - a function that seaches for an integer
 * @array : an array of integers
 * @size : size of the array
 * @cmp : a pointer to the function to be used to compare values
 *
 * Return - Return -1 if not match is foundon success or size <= 0
 *          else return the first element with wich the cmp function does
 *          not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if(size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for(i = 0; i < size; i++)
	{
		if(cmp(array[i]) != 0)
			return(i);
	}

	return (-1);
}
