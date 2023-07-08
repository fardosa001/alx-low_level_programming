#include "main.h"

/**
 * get_bit - prints the value of a bit at a given index.
 * @n: number
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int bit_max;

	bit_max = (sizeof(unsigned long int) * 8);
	if (index > bit_max)
	return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
