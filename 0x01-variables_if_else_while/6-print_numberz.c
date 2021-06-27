#include <stdio.h>
/**
 *main - print alphabet
 *
 *Description: 0 9 alphabet
 *Return: 0 if the program run
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
