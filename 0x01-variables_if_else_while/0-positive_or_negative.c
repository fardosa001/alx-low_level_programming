#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
=======

/**main-Entry point
*Return: Always 0
*Description: get ramdon number and print
*/
>>>>>>> ed18deb96fed357da8a76a018f1a9485084069a5
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
=======
	
>>>>>>> ed18deb96fed357da8a76a018f1a9485084069a5

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
<<<<<<< HEAD

=======
>>>>>>> ed18deb96fed357da8a76a018f1a9485084069a5
