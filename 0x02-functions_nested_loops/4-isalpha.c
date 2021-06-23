#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * description: prototype isalpha
 * @c: - evaluate the character
 * Return: - 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
