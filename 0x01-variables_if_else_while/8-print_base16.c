#include <stdio.h>
/**
 * main - print the numbers of base 16 in lowercase,
 *  follow a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char i;
	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
