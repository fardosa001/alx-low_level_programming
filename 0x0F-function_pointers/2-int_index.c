#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer.
 * @size: number of elements in the array
 * @array: an array.
 * @cmp: a pointer to the function to be used to compare values
 * Return: Index of the first element for which,
 * the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;
	
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	
	for (a = 0; a < size; a++);
	
	if (cmp(array[a]) != 0)
	return (a);

	return (-1);
}
