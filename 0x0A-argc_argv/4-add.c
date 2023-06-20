#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds possitive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	 int i;
	unsigned int j, sum = 0;
	char *n;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{

		n = argv[i];

	for (j = 0; j < strlen(n); j++)
	{
	if (n[j] < 48 || n[j] > 57)
	{
		printf("Error/n");
		return (1);
	}

	}
		sum += atoi(n);
		n++;
	}
		printf("%d\n", sum);

	}
	else
	{

	printf("0\n");

	}


	return (0);
}






