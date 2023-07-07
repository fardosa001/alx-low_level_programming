#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: points to a string of 0 and 1 chars
 * Return: converted number or 0 if b is NULL or if,
 * there is one or more chars in the string b that is not 0 or 1,
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int len, i;
	int num = 1;

	if (b == NULL)
		return (0);

	len = strlen(b);

		for (i = (len - 1); i >= 0; i--)
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
		if (b[i] == '1')
		sum += num;
		num *= 2;
		}

	return (sum);
}
