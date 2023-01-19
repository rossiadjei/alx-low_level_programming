#include "function_pointers.h"

/**
 * print_name - A function that print the name using a pointer to a function
 * @name : name to be printed
 * @f : pointer to the function that print name
 */

void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		return;
	f(name);
}
