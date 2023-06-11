#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)

	printf("%s\n", argv[i++]);

	return (0);
}
