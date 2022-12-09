#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  prints out value of last digit of given number
 * Return: must be 0 to be sucessful, return non-zero otherwise
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int ld 
	ld = n % 10;

	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);

	else if (ld (!0) && < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);

	else
		printf("Last digit of %d is %d and is 0\n", n, ld);


	return (0);
}
