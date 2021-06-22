
#include <stdio.h>
/**
 * main - Print alphabet in loweR, AND uppercase.
(* DESCRIPTION: alphabetic in low and up with while
* Return: 0 on success
*/

int main(void)

{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);

}
