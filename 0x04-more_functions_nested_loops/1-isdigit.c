#include "main.h"

/**
 * _isdigit - checks to see if a given character is a digit
 *
 * @c: character to check
 *
 * Return: (1) if successful, else return (0)
 */


int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

