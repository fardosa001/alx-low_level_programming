#include "main.h"

/**
 * _puts_recursion - Writes a function that prints a string,
 * followed by a newline.
 * @s: The string to be printed
 * Return: nothing
 **/

void _puts_recursion(char *s)
{
	if (*s == '\0')

	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}

