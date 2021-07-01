# incluye  " holberton.h "

/ * *
 * _memset - full memory with constant byte
* @s: spaces memory to fully
* @b: byte for complite
* @n: number of the space to fully
 *
* Return: pointer to memory area
 * /
char *_strcat(char *dest, char *src)
{
	int z, h;

	for (z = 0; dest[z] != '\0'; z++)
	{
	}
	for (h = 0; src[h] != '\0'; h++, z++)
	{
		dest[z] = src[h];
	}

	return (dest);
}
