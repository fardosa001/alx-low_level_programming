#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs.
 * @d: Dog structure
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{

	if (d != NULL)
	{

		free(d->owner);
		free(d->name);
		free(d);
	}
}
