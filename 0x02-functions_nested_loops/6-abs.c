#include "holberton.h"

/**
 *_abs - absolute number
 *@f: 1st operat
 *Return: the absolut value
 */
int _abs(int f)
{
	if (f > 0)
	{
		return (f);
	}
	else
		f = (f * -1);
	return (f);
}
