#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * prints the alphabets in lower case
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();
	putchar('\n');
}

print_alphabet(void)
{
	char c = 'a';

	for ( ; c <= 'z'; c++)
		putchar(c);
}
