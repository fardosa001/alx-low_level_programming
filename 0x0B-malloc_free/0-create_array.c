#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and initializes it
 * with a specific character
 * @c: Charcter to fill the array
 * @size: size of array
 * Return: Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
