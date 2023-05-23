#include "main.h"

/**
 * print_alphabet_x10 - print letters of the alphabet 10x in lowercase
 *
 * Return: always (0) success
 */

void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}

