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
	int s1_len, s2_len;
	char *s;

	if (s1 == NULL)
	{
		return ("");
	}

	if (s2 == NULL)
	{
		return ("");
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	s = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (s == NULL)
	{

	return ("");
	}

	strcpy(s, s1);
	strcat(s, s2);

	return (s);
}
