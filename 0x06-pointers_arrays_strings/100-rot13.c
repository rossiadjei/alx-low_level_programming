#include "main.h"

/**
 * rot13 - caesers cipher
 * @s: pointer to an array of words
 *
 * Return: s
 */

char *rot13(char *s)
{
	int a, b;

	char ros[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char res[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; ros[b] != '\0'; b++)
		{
			if (s[a] == ros[b])
			{
				s[a] = res[b];
				break;
			}
		}
	}
	return (s);
}
