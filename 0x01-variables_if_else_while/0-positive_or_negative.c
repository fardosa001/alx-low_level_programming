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
*  
*Return: Always 0
*
*Description: get ramdon number and print
*/
<<<<<<< HEAD

=======
>>>>>>> ed18deb96fed357da8a76a018f1a9485084069a5
>>>>>>> 367c3c44de91965be6bdfb4c67c39688e578c790
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
=======
	
>>>>>>> ed18deb96fed357da8a76a018f1a9485084069a5

	if (n > 0)

		printf("%i is positive\n", n);

	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
<<<<<<< HEAD

=======
>>>>>>> ed18deb96fed357da8a76a018f1a9485084069a5
