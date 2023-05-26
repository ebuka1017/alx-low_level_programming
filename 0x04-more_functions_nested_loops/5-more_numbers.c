#include "main.h"

/**
 * more_numbers - prints 10x the numbers 0-14, followed by a new line
 *
 * Return: Always (0) success
 */

void more_numbers(void)
{
	int i;
	int k;


	for (i = 0; i < 10; i++)
	{
		for (k = 1; k <= 14; k++)
		{
			_putchar((i < 10) ? i + '0' : ((i / 10) + '0'));
			_putchar((i < 10) ? i + '0' : ((i % 10) + '0'));
		}

		_putchar('\n');
	}
}

