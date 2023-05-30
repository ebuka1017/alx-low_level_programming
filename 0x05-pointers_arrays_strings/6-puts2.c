#include "main.h"

/**
 * puts2 - prints every other character of a strin
 *
 * @str: char to be printed
 */

void puts2(char *str)
{
	int length;
	int i;


	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i <= length; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}

