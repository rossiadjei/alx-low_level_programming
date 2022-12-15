#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int hsh, index;

	if (size > 0)
	{
		for (hsh = 1; hsh <= size; hsh++)
		{
			for (index = size - hsh; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < hsh; index++)
				_putchar('#');

			if (hsh == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
