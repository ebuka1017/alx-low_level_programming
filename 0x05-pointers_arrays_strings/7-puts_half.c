#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int length;
	int mid;
	int i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	mid = length / 2;

	for (i = mid; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

