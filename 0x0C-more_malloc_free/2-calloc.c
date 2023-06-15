#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array of nmemb elements,
 * of size bytes each and returns a pointer to the allocated memory.
 * @size: size of memory to print
 * @nmemb: element of an array
 * Return: A pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb == 0 || size == 0)

	return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)

	return (NULL);

	memset(a, 0, nmemb * size);

	return (a);
}
