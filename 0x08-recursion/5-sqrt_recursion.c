#include "main.h"
#include <stdio.h>
/**
 * _sqrt - find square root of n, starting from the smallest possible, 0.
 * @n: a number.
 * @i: checks root.
 * Return: natural square root, -1 if it does not have a natural square root.
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}


/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: a number
 * Return: -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	return (-1);

	return (_sqrt(n, 0));
}
