#include "main.h"

/**
 * _memset - prints buffer in hexa
 * @s: buffer
 * @b: write
 * @n: size
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
