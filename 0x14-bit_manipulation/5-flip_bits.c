#include "main.h"

/**
 * flip_bits - returns number of bits you would need to flip.
 * @n: integer
 * @m: integer.
 * Return: number of bits needed to flip from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_bits = 0;
	unsigned long int diff_of_num = n ^ m;

	while (diff_of_num > 0)
	{
		if (diff_of_num & 1)
			num_bits++;
		diff_of_num >>= 1;
	}
	return (num_bits);
}
