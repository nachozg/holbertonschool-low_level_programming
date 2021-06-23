#include "holberton.h"
/**
 * main - check the code for Holberton students in.
 *
 * Return: Always 0.
 */

intprint_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
