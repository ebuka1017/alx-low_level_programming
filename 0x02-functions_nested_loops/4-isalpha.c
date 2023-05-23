#include "main.h"

/**
 * _isalpha - checks for alphabet
 *
 *@c: character to compare
 *
 * Return: (1) if isalpha & (0) otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
