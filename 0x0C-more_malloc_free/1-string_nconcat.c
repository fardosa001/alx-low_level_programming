#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to concatanate.
 * @s2: second string to concatenate.
 * @n: n bytes of second string.
 * Return: Pointer to allocated memory of s1 + nbytes of s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j;

	if (s1 == NULL)

	{
		s1 = ("");
	}

	if (s2 == NULL)

	{
		s2 = ("");
	}

	i = strlen(s1);
	j = strlen(s2);

	if (n >= j)
	n = j;

	concat = malloc(sizeof(char) * (i + j) + 1);

	if (concat == NULL)

	return (NULL);


	strncpy(concat, s1, i);

	strncpy(concat + i, s2, n);

	concat[i + n] = '\0';

	return (concat);
}


