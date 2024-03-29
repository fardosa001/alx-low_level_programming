#include "main.h"
/**
  *factorial - finds factorial of a given number
  *@n: number whose factorial is to be found
  *Return: integer value
  */

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n <= 0)
	return (1);

	return (n * factorial(n - 1));
}

