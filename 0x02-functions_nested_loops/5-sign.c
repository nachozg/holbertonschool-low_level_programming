#include "holberton.h"

/**
 * print_sign - evaluation of n
 * Description: 0, + ir -
 * @n: number evaluation
 * Return: 0 if 0, + if greate than 0, - if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
