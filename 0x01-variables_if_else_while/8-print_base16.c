#include <stdio.h>
/**
 * main - print the numbers of base 16 in lowercase,
 *  follow a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	char j;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
