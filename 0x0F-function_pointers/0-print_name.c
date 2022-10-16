#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(int))
{
	if (name && f)
		f(name);
}
