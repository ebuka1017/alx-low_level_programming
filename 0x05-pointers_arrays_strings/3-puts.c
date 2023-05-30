#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: string to be printed
 */


void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_puchar(str[i]);
		str++;
	}
}

