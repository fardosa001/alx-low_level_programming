#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *a;
	int i;
	int n = (max - min + 1);

	if (min > max)

	return (NULL);

	a = malloc(sizeof(int) * n);
	if (a == NULL)
		return (NULL);


	for (i = 0; i < n; i++)
		a[i] = min++;

	return (a);
}
