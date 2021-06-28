#include <stdio.h>
/**
 * main - print aphabet
 *
 * function prints alphabet with commas
 * return 0 always
 *
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
