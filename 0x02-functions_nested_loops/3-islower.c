#include "main.h"

/**
 * _islower - checks for lowercase char
 *
 *@c: character to compare
 *
 * Return:(1) if islower & (0) otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_puchar(1);
	}
	else
	{
		_putchar(0);
	}
}
