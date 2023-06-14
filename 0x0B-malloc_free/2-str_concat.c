#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatenates two stringss
 * @s1: first string
 * @s2: second string
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int index, concat_index = 0, len = 0;
	char *s;

	if (s1 == NULL)
	{
	return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}

	for (index = 0; s1[index] || s2[index]; index++)

	len++;
	s = malloc(sizeof(char) * len);

	if (s == NULL)

	return (NULL);

	for (index = 0; s1[index]; index++)
		s[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		s[concat_index++] = s2[index];


	return (s);
}
