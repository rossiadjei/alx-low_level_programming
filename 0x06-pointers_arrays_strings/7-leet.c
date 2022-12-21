#include "main.h"

/**
 * leet - replace letters with numbers
 * @s: pointer to an array of words
 *
 * Return: s
 */

char *leet(char *s)
{
	int a, b;

	char ros[] = "aeot";
	char ros1[] = "AEOT";
	char res[] = "1337";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; ros[b] !=  '\0' && ros1[b] != '\0'; b++)
		{
			if (s[a] == ros[b] || s[a] == ros1[b])
			{
				s[a] = res[b];
			}
		}
	}
	return (s);
}
