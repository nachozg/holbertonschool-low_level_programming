
#include "holberton.h"

/**
 *print_rev - print a str in reverse
 *@s : number
 *
 *Return: reverse chars
 */
void reverse_array(int *a, int n)
{
	int h, j, z;

	j = n - 1;

	for (h = 0; h < n / 2; h++)
	{
		z = a[h];
		a[h] = a[j];
		a[j--] = z;
	}
}
