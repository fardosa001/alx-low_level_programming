#include <stdio.h>

/**
 * add - adds two integers
 * @a: integer
 * @b: integer
 * Return: sum of integers
 */
int add(int a, int b)
{
 return (a + b);
}

/**
 * mul - multiplies two integers
 * @a: int
 * @b int
 * Return: product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * sub - subtract two integers
 * @a: int
 * @b: int
 * Return: result of subtaction of b from a
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * div - divides two integers
 * @a: int
 * @b: int
 * Return: result of the division
 */
int div(int a, int b)
{
	if (b == 0)
		return (-1);
	else
	return (a / b);
}

/**
 * mod - computes the reminder of two integers
 * @a: divident
 * @b: divisor
 * Return: the reminder
 */
int mod(int a, int b)
{
	if (b == 0)
		return (-1);
	else
		return (a % b);
}
