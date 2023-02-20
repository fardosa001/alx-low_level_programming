#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabet in lowercase except 'e' and 'q'
 * Return: always 0
 */
int main(void)

{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
		}
		putchar (n);
		n++;
	}
		putchar ('\n');

		return (0);
}
