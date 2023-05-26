#include "main.h"

/**
 * _isupper - checks if c is uppercase
 *
 * @c: character to be checked
 *
 * Return: 1 if c isupper, else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
