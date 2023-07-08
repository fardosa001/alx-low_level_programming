#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: integer
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_max;
	unsigned long int mask = 1;

	bit_max = (sizeof(unsigned long int) * 8);
	if (index > bit_max)
		return (-1);

	mask <<= index;
	*n = (*n | mask);
	return (1);
}
