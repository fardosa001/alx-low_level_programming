#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on,
 *  each element of an array.
 *  @size: Size of the Array.
 *  @array: an array.
 *  @action: pointer to the function to be used.
 *  Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != NULL && action != NULL)

		for (a = 0; a < size; a++)
			action(array[a]);
}

