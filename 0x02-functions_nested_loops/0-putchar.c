#include  <stdio.h>
/**
 * main - Entry point
 * Description: print _putchar
 * Return: always 0
 */
int main(void)
{
	char *n = "_putchar";

	while (*n)
	{
		putchar (*n);
		n++;
	}
		putchar ('\n');
	return (0);
}
