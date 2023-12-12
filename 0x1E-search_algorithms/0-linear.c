#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers.
 * @array: pointer to the first element of the array
 * @value: value to search
 * @size: number of elements in array
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);

		if (array[j] == value)
			return (j);
	}
	return (-1);
}
