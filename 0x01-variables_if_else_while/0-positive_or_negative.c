#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * prints whether or not n is positive or negative
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	if (n < 0)
		printf("%i is negative\n", n);
	if (n == 0)
		printf("%i is zero\n", n);
	return (0);
}
