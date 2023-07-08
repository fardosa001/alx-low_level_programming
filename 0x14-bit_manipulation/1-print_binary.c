#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * print_binary - prints the binary representation of a number.
 * @n: integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = n, mask = 1;
	int len = 0;

	while (i > 0)
	{
		len++;
		i >>= 1;
	}
	len -= 1;

	if (len > 0)
		mask = mask << len;

	while (mask > 0)
	{
		if (n & mask)
			_putchar ('1');
		else
			_putchar('0');
		mask >>= 1;

	}

}
