#includ "main.h"

/**
 * _strncpy - copies one string (or bytes given)
 * @dest: where to copy;
 * @src: string to copy or bytes to copy
 * @n: how many bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index_1, index_2;

	index_1 = 0;
	index_2 = 0;
	while (index_1 != n)
	{
		dest[index_2] = src[index_1];
		if (src[index_1] == '\0')
		{
			dest[index_2] = '\0';
			break;
		}
	       index_2++;
		index_1++;
	}
	while (index_2 != n)
		dest[index_2++] = '\0';
	return (dest);
}
