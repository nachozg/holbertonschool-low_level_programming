#include "holberton.h"
/**
 * _strncpy - copy a strings
 * @dest: first bg string
 * @src: second lw string
 * @n: number of bytes of src to be copied
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
