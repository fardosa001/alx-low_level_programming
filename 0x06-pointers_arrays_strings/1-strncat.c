#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, p = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (p < n && src[p])
	{
		dest[dlen] = src[p];
		dlen++;
		p++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
