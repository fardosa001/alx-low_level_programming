#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers.
 * @separator: the string to be printed between numbers.
 * @n: number of integers passed to the function
 * Return: 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int j = 0;

	if (n > 0)
	{

	va_start(ap, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(ap, int));


	if (j != n - 1 && separator != NULL)

		printf("%s", separator);
	}

	va_end(ap);

	}
	printf("\n");

}
