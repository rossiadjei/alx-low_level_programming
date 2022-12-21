#include "main.h"

/**
 * _strcat - appends strings
 * @dest: destination to append
 * @src: what to append
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int index, j;

	for (index = 0; dest[index] != '\0'; index++)
	{
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[index] = src[j];
		j++;
		index++;
	}
	index++;
	dest[index] = '\0';
	return (dest);
}
