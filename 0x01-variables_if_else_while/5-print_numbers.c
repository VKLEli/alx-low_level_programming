#include <stdio.h>
/**
 * main - entry point
 *
 * prints all base 10 digits
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i;

	for ( ; i < 10; i++)
		printf("%d", i);
	putchar('\n');

	return (0);
}
