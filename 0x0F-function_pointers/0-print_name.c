#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name.
 * @name : name to be printed.
 * @f: function to execute
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{

	f(name);
}
