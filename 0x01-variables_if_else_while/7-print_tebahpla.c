#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse, follow new line.
 *
 * Return: everithing 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar ('\n');
	return (0);
}
