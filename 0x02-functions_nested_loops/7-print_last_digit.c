#include "main.h"

/**
 * print_last_digit - prints last digit of a number.
 * @p: The number whose last digit is to be printed.
 *Return: The last digit.
 */
int print_last_digit(int p)
{

	int last_digit = p % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}

