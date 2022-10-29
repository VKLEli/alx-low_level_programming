#include <stdio.h>
/**
 * main - entry point
 *
 * prints all single digits followed by a comma
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	i = '0';

	do {
		putchar(i);
			if (i <= '9')
				break;
		putchar(',');
		putchar(' ');
		i++;
	} while (i <= '9');

	putchar('\n');
	return (0);
}
