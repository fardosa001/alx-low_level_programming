#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *main - Entry point
  *Description: 'get the Last digit of a number'
  *return: always 0
  */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
	  printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
	  printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
	  printf("Last digit of %d is %d and less than 6 and 0\n", n, ld);
	}

	return (0);
}
