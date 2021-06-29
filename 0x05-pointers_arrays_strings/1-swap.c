#include "holberton.h"

/**
 * swap_int - principal function.
 * @a: Puntero, first integrer.
 * @b: Puntero, second integrer.
 *
 * Description: This function swaps the values of two integers.
 *
 * Return: interchange
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
