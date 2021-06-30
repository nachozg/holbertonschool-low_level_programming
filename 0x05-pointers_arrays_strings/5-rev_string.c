#include "holberton.h"

/**
 * rev_string - main function.
 * @s: Pointer, the string to print.
 *
 * Description: This function reverses a string.
 *
 * Return: none.
 */
void rev_string(char *s)
{
	int p, c, l;
	char o;

	for (p = 0; s[p] != '\0'; p++)
		;

	l = p;
	for (p--, c = 0; c < l / 2; p--, c++)
	{
		o = s[c];
		s[c] = s[p];
		s[p] = o;
	}
}
