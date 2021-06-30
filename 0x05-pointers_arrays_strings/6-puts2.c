#include "holberton.h"

/**
 * puts2 - main function.
 * @str: Pointer, the string.
 *
 * Description: function prints ever character a string
 * (divid two)
 * Return: nothing
 */
void puts2(char *str)
{
	int h;

	h = 0;
	while (*(str + h) != 0)
	{
		if ((h % 2) == 0)
			_putchar(*(str + h));
		h++;
	}
	_putchar('\n');
}
