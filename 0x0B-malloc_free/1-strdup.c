#include <stdlib.h>
#include "main.h"
/**
 * _strdup - creates pointer to a newly allocated space in memory
 * @str: te strings
 *
 * Return: a pointer to the duplicate string
 */

char *_strdup(char *str)
{
	char *dup;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
