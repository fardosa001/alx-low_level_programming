#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a new pointer to a new sting which is a duplicate
 * @str: the string to duplicate
 * Return: Duplicated string
 */
char *_strdup(char *str)
{
	int len, i;
	char *s;

	if (str == NULL)
	return (NULL);

	len = 0;
	while (*(str + len))
		len++;

	s = malloc(sizeof(char) * len + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		*(s + i) = *(str + i);
	}

	return (s);
}
