#include "main.h"

/**
 * _strncat - concatenates one string (number of byte given)
 * to another
 * @dest: where to concatenate
 * @src: string to concatenate
 * @n: how many bytes to
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, j;

	for (index = 0; dest[index] != '\0'; index++)
	{
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[index] = src[j];
		index++;
		j++;
	}
	return (dest);
}
