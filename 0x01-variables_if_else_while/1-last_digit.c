#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n, Last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_dig = 
	/* your code goes there */
	if (n > 5)
	  printf("Last digit of %d is %d and is greater than 5\n", Last_dig, n);
	else if (n == 0)
	  printf("Last digit of %d is %d and is 0\n", Last_dig, n);
	else if (last_dig < 6 && last_dig != 0)
	  printf("Last digit of %d is %d and is 0\n", last_dig, n);
	  
	return (0);
}
