#include <stdio.h>
/**
 * main - entry point
 *
 * prints all base 10 digits using putchar
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char c;

	for ( ; c <= '9'; c++)
		if (c >= '0')
			putchar (c);
	putchar('\n');

	return (0);
}
