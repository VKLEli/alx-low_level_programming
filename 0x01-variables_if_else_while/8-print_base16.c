#include <stdio.h>
/**
 * main - entry point
 *
 * prints all hexadecimal digits using putchar
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int c;

	for ( ; c <= '9'; c++)
		if (c >= '0')
			putchar (c);

	for ( ; c <= 'f'; c++)
		if (c >= 'a')
			putchar (c);
	putchar('\n');

	return (0);
}
