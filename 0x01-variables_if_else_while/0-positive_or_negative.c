#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* 
 * main -Entry point
 *
 *Description: This program assigns a rand number to the variable n
 *
 *Returns: random number
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	  {
	  printf("%d is positive\n", n);
	  }
	else if (n == 0)
	  {
	  printf("%d is zero\n", n);
	  }
	else if (n < 0)
	  {
	  printf("%d is negative\n", n);
	  }
	return (0);
}
