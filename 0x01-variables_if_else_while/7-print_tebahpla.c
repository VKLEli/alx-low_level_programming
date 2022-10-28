#include <stdio.h>
/**
 * main - entry point
 *
 * prints alphabets in reverse
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char c;

	c = 'z';

	do {
		putchar(c);
		c--;
	}
	while (c >= 'a');

	putchar('\n');
	return (0);
}
