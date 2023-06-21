#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - sums a and b
 * @b: integer
 * @a: integer
 * Return: sum
 */
int op_add(int a, int b)
{

	return (a + b);
}

/**
 * op_sub - returns difference of a and b
 * @a: integer
 * @b: integer
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - returns product of a and b
 * @a: integer
 * @b: integer
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division result of a and b
 * @a: integer
 * @b: integer
 * Return: division result
 *
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of the division of a and b
 * @a: integer
 * @b: integer
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

