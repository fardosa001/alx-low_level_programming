#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	datatype type[] = {
		{'c', print_char },
		{'i', print_int },
		{'f', print_float },
		{'s', print_string },
		{'\0', NULL}
	};
	
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(ap, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			type[j].f(separator, ap);
			separator = ", ";
		}
		j++;

	}
	i++;

	}
		
	va_end(ap);

	printf("\n");
		
}

/**
 * print_char - prints a char
 * @ap: argument parameters
 * Return: 0
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints integer
 * @ap: argment parameters
 * Retun: 0
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints float
 * @ap: argument parameters
 * Return: 0
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string
 * @ap: argument parameters
 * Return: 0
 */
void ptint_string(va_list ap)
{
	s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}
