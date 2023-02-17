#include <stdlib.h>
#include <time.h>

/* Return: Always 0 */

/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	else if (n>0); {
                  printf("%d is possitive/n",n); 
	}
           
	    else if (n==0)  {
		   printf("%d is zero/n",n);
	    }
	    else if  (n<0) {
		   printf("%d is negative/n",n);
	    } 
		
	return (0);
}
