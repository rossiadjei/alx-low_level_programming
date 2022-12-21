#include "main.h"

/**
 * string_toupper - change a string to upper case
 * @s: pointer to a string
 * Return: s
 */

char *string_toupper(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] = s[index] - 32;
		}
		++index;
	}
	return (s);
}
