#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints string
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int j = 0;
	char *string;


	if (n > 0)
	{

	va_start(ap, n);

	for (j = 0; j < n; j++)
	{
		string = va_arg(ap, char *);
		if (string == NULL)
		printf("%s", "(nil)");

		else
			printf("%s", string);

	if (separator != NULL && j != n)
		printf("%s", separator);
	}

	va_end(ap);

	}

	printf("\n");
}
