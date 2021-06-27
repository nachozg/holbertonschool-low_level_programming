#include <stdio.h>
/**
 *main - print alphabet
 *
 *Description: display alphabet to ten
 *Return: 0 if the programming run to complit
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
