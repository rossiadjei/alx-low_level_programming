#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	char *str;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(arg);
}
