#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This program prints the last digit of a number
 *
 *Reurn: always 0
*/
int main(void)
{
 int n, Last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_dig = n % 10;
	/* your code goes there */
	if (n > 5)
	  printf("Last digit of %d is %d and is greater than 5\n", Last_dig, n);
	else if (n == 0)
	  printf("Last digit of %d is %d and is 0\n", Last_dig, n);
	else if (last_dig < 6 && last_dig != 0)
	  printf("Last digit of %d is %d and is 0\n", last_dig, n);	  
 return (0);
}
