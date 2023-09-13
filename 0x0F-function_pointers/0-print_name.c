#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - Print a name using a provided function.
 * @name: Pointer to the name to be printed.
 * @f: Pointer to a function that takes a character
 * pointer as its argument.
 *
 * This function takes a name and a function pointer
 * as arguments and calls
 * the provided function with the name as its argument
 * to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
