#include "holberton.h"

/**
 *_strlen - prints a mesages
 *@s : number
 *
 *Return: end program
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
