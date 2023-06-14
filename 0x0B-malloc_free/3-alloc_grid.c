#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @height: height of grid
 * @width: width of grid
 * Return: Pointer
 */
int **alloc_grid(int width, int height)
{
	int a, i;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * height);

	if (ptr == NULL)
	return (NULL);

	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(sizeof(int) * width);

		if (ptr[a] == NULL)
		{
			for (; a >= 0; a--)
			free(ptr[a]);

		free(ptr);
		return (NULL);

		}
	}

	for (a = 0; a < height; a++)
	{
		for (i = 0; i < width; i++)
			ptr[a][i] = 0;
	}

		return (ptr);
}
